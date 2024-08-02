#include <iostream>
using namespace std;

class Parent
{
public:
    Parent()
    {
        cout << "Parent's Constructor\n";
    }
    virtual ~Parent()
    {
        cout << "Parent's Destructor\n";
    }
    virtual void display()
    {
        cout << "Display inside Parent\n";
    }
};

class Child : public Parent
{
public:
    Child()
    {
        cout << "Child's Constructor\n";
    }
    ~Child()
    {
        cout << "Child's Destructor\n";
    }
    void display() override
    {
        cout << "Display inside Child\n";
    }
};

int main()
{
    Child obj1;
    obj1.display();         // Calls Child's display
    obj1.Parent::display(); // Calls Parent's display

    Child *obj2 = new Child;
    obj2->display(); // Calls Child's display
    delete obj2;     // Calls Child's and then Parent's destructor

    Parent *pointer = new Child;
    pointer->display(); // Calls Child's display due to virtual function
    delete pointer;     // Calls Child's and then Parent's destructor

    return 0;
}

/*
* Notes
+-------------------+------------------------+
| Class             | Accessibility          |
+-------------------+------------------------+
| Parent (Constructor) | Called when Parent or Child object is created |
| Parent (Destructor)  | Called when Parent or Child object is destroyed |
| Child (Constructor)  | Called when Child object is created |
| Child (Destructor)   | Called when Child object is destroyed |
| display (Parent)     | Can be called using Parent class or scope resolution |
| display (Child)      | Overrides Parent's display and called using Child object |
+-------------------+------------------------+
*/
