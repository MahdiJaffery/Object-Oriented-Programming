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

int main()
{
    Child obj1;
    obj1.display(); // Calls Child's display function

    obj1.Parent::display(); // Calls Parent's display function

    Child *obj2 = new Child;
    obj2->display(); // Calls Child's display function
    delete obj2;     // Calls Child's and then Parent's destructor

    Child *ptr2 = new Child;
    Parent *ptr3 = new Child;
    delete ptr3; // Calls Child's destructor (because of virtual destructor)

    return 0;
}

/*
* Notes
+-------------------+------------------------+
| Class             | Destructor Behavior    |
+-------------------+------------------------+
| Parent            | Virtual destructor ensures proper cleanup of derived classes |
| Child             | Destructor called when Child object is destroyed |
| obj1              | Directly calls Child's display |
| obj1.Parent::display() | Calls Parent's display function |
| obj2              | Dynamically allocated Child object |
| ptr2              | Dynamically allocated Child object |
| ptr3              | Base class pointer pointing to Child object |
+-------------------+------------------------+
*/
