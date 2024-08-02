#include <iostream>
using namespace std;

// Lecture 018, 28th March 2023

/* Inheritance
 * => Relationship among classes
 * => Is a relationship/parent-child/Relationship
 * => A new class is based-on/derived from an existing class
 */

/*
 * Generalization vs. Specification
 */

class A
{
    int a;

public:
    A() : a(0) {}
    ~A() {}
    void display()
    {
        cout << "A: " << a << endl;
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

class B
{
    int b;

public:
    B() : b(0) {}
    ~B() {}
    void point()
    {
        cout << "B: " << b << endl;
    }
    void setB(int n)
    {
        b = n;
    }
    int getB()
    {
        return b;
    }
};

class C : public A
{
    int x;

protected:
    int y;

public:
    int z;
    C() : x(0), y(0), z(0) {}
    void display()
    {
        cout << "C: x = " << x << ", y = " << y << ", z = " << z << endl;
    }
};

class D : public C
{
    int b;

public:
    D() : b(0) {}
    void print()
    {
        // x is private in C and hence not accessible
        // y is protected in C and hence accessible in D
        // z is public in C and hence accessible in D
        // x = 5; // This line would cause a compilation error
        y = 10;
        z = 15;
        cout << "D: y = " << y << ", z = " << z << endl;
    }
};

int main()
{
    A obj1;
    obj1.setA(5);
    obj1.display();

    B obj2;
    obj2.setB(10);
    obj2.point();

    C obj3;
    obj3.z = 20;
    obj3.display();

    D obj4;
    obj4.print();

    return 0;
}

/*
 * Note
 * Derived/Child class inherits data members and member functions of Base/Parent Class
 * except constructor and destructor
 *
 *
 * Access Specifiers
 * 1) Private
 * 2) Protected
 * 3) Public
 */
