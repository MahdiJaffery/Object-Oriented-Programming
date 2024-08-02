#include <iostream>
using namespace std;

class Parent
{
public:
    Parent()
    {
        cout << "Parent Class' Constructor\n";
    }
    virtual ~Parent()
    {
        cout << "Parent Class' Destructor\n";
    }
    virtual void display()
    {
        cout << "Display Function of Parent\n";
    }
};

class Child : public Parent
{
public:
    Child()
    {
        cout << "Child Class' Constructor\n";
    }
    ~Child()
    {
        cout << "Child Class' Destructor\n";
    }
    void display() override
    {
        cout << "Display Inside Child\n";
    }
};

void func(Parent &obj)
{
    obj.Parent::display(); // Calls Parent's display function
}

int main()
{
    Child c;
    func(c); // Calls Parent's display function through reference
    return 0;
}

/*
* Notes
+-----------------------------+-----------------------------------------+
| Concept                     | Description                             |
+-----------------------------+-----------------------------------------+
| Pure Virtual Function       | A function declared in the base class but not defined in it |
|                             | Must be defined in derived classes      |
|                             | Syntax: virtual void function() = 0;    |
| Final Virtual Function      | A function in the base class that cannot be overridden in derived classes |
|                             | Syntax: virtual void display() final {};|
| Final Class                 | A class that cannot be inherited from   |
|                             | Syntax: class A final {};               |
+-----------------------------+-----------------------------------------+
*/
