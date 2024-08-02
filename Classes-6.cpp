#include <iostream>
#include "Header.h"
using namespace std;

class A
{
    int a;

public:
    A(int n = 3)
    {
        a = n;
        std::cout << "Parametered Constructor\n\n";
    }
    A(const A &obj)
    {
        std::cout << "Copy Constructor\n\n";
    }
    int getA()
    {
        return a;
    }
    void operator=(const A &obj)
    {
        std::cout << "Assignment Operator\n\n";
    }
    A myFunc(A obj)
    {

        A ans;
        ans.a = obj.a;
        return ans;
    }
    void setA(int);
    ~A()
    {
        std::cout << "Destructor\n\n";
    }
};
void A::setA(int a)
{
    this->a = a;

    // *(this).a or this->;a
    // "this" is a pointer of an object that points to itself
}

int main()
{
    A obj1, obj2 = obj1;
    A obj3;
    obj3 = obj2.myFunc(obj1);

    A a, b;
    a = b; // Return type void for binary operator
    // a = b = c ; Return type obj for Tertiary Operator

    // Objects to Pointers
    A obja;
    A *objptr;
    objptr = &obja;

    // Dynamic Declaration of classes with pointers
    // Declare all dynamically
    // use ->; instead of . in main
    // Delete everything
}