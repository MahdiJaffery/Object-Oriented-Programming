#include <iostream>
using namespace std;

class Person
{
    int age;
    string name;

public:
    void setAge(int n)
    {
        age = n;
    }
    int getAge()
    {
        return age;
    }
};

int main()
{
    // Structured Programming vs OOP
    // SP: Primitive Datatypes (Built in e.g. int, double)
    // OOP: Abstract Programmer/User-Defined Datatypes

    // Class: A Blueprint
    // Object: An occourance of class

    // State vs Behaviour of a class
    // State: What the class looks like
    // Behaviour: What a class does
    // Access Modifiers / Signatures of a Class: 1) Private 2) Public 3) Protected

    Person obj1;

    // Setters/Modifiers: Used to set values only
    // Getters/Accessors: Only usede to return or cout

    // Every Variable has one getter and one setter
}