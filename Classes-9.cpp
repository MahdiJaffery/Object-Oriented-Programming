#include <iostream>
using namespace std;

// -> Static Data Members and member functions

// -> Association (->)
// -> Weak Relationship
// -> No Ownership Involved
// -> Object Lifespan is independent
// e.g. Student -> Books

/* Aggregation (<>)
 * Weak Relationship
 * Ownership is involved
 * Object's lifespan is independent
 * e.g. Department <> Teacher
 */

/* Composition
 * Strong Relationship
 * Ownership is involved
 * Object's lifespan is dependent
 * e.g. House - Room
 */

class A
{
    static int a;

public:
    A(int n = 3)
    {
        a = n;
    }
    void setA(int a)
    {
        this->a = a;
    }
    int getA()
    {
        return a;
    }
    static void display()
    {
        cout << a << endl;
    }
};

int A::a = 0;

int main()
{
    A obj1, obj2;
    obj1.setA(10);
    cout << obj2.getA() << endl;
    obj1.display();
    A::display();
    return 0;
}
