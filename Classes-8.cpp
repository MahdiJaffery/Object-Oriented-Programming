#include <iostream>
using namespace std;

// Concept of "friend" in C++:
// friend is a keyword used by a class in order to give right to access its private members to a simple function
// or to a certain/specific function inside another class or to a whole class

class A;

class B
{
    int b;

public:
    B(int n = 5) : b(n) {}
    void display(A);
};

// ->friend function:
class A
{
    int a;

    friend void display(A);
    friend class B;
    friend void B::display(A);

public:
    A(int n = 3) : a(n) {}
};

void B::display(A obj)
{
    cout << obj.a << endl;
}

void display(A obj)
{
    obj.a = 4;
    cout << obj.a << endl;
}

int main()
{
    A obj0(9);
    display(obj0);

    A obj1;

    B obj2;
    obj2.display(obj1);
}
