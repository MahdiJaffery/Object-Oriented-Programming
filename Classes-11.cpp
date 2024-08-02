#include <iostream>
using namespace std;

class Extra
{
public:
    Extra(int n = 0)
    {
        cout << "Constructor of Extra\n";
    }
};

class A
{
    int x;

protected:
    int y;

public:
    int z;
    A(int n = 3) : x(1), y(n), z(3)
    {
        cout << "Constructor of A\n";
    }
};

class B : public A
{
    int b;

public:
    B()
    {
        cout << "Constructor of B\n";
    }
};

class C : public B
{
    Extra e;

public:
    C(int l = 3) : e(l)
    {
        cout << "Constructor of C\n";
    }
};

int main()
{
    C obj(6);
    return 0;
}
/*
+--------------------------------------------+
|                  Notes                     |
+-------------------+------------------------+
| Class             | Accessibility          |
+-------------------+------------------------+
| A (Private)       | Inaccessible           |
| A (Protected)     | Accessible in B and C  |
| A (Public)        | Accessible in B and C  |
+-------------------+------------------------+
| B (Protected)     | Accessible in C        |
| B (Public)        | Accessible in C        |
+-------------------+------------------------+
| C (Private)       | Inaccessible           |
| C (Protected)     | Inaccessible           |
| C (Public)        | Accessible             |
+-------------------+------------------------+
*/