#include <iostream>
using namespace std;

class A
{
    int a;
    double b;

public:
    A()
    {
        a = 5, b = 7.8;
        cout << "\n\nNon-Parameterized Constructor\n\n";
    }
    A(int n1, double n2)
    {
        a = n1, b = n2;
        cout << "\n\nParameterized COnstructor\n\n";
    }
    void setA(int n)
    {
        a = n;
    }
    int getA()
    {
        return a;
    }
};

int main()
{

    A obj1, obj2(1, 1.5);
    // Creeating an Object makes the class come into occourance
    // Inteligence List: The dropdown list after adding the . with the object

    // Constructors in OOP:
    // A member function that will automatically be called whenever an instance of a class/object is created
    // Has no return type
    // It runs as soon as the object is created
    // We make our own constructors to make our code more efficient
    // A constructor is public on its own; although it can be made private

    // Types of Constructors:
    // 1. Parametered
    // 2. Non-Parametered

    // Giving it the same name as class will tell the compiler that it is a constructor

    // It&#39;s purpose is to eventually control authorization
    // Used to allocate memory in default

    // Function Overloading: Same scope of the functions with the same name
}