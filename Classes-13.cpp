#include <iostream>
using namespace std;

class Extra
{
public:
    Extra(int n = 0)
    {
        cout << "Constructor\n";
    }
};

class A
{ // "Grand-Parent Class"
    int x;

protected:
    int y;

public:
    int z;
    A(int n = 3) : x(1), y(2), z(3)
    {
        cout << "Constructor of A\n";
    }
};

class B : public A
{ // "Parent Class"
    int b;

public:
    B()
    {
        cout << "Constructor of B\n";
    }
};

class C : public B
{ // "Child Class"
    Extra a;

public:
    C(int n = 3) : a(n)
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
* Notes
+-------------------+------------------------+
| Class             | Accessibility          |
+-------------------+------------------------+
| Extra             | Constructor called when Extra object is created |
| A (Grand-Parent)  | Constructor called when A or derived objects are created |
| B (Parent)        | Constructor called when B or derived objects are created |
| C (Child)         | Constructor called when C object is created |
+-------------------+------------------------+
*/
