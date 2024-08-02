#include <iostream>
using namespace std;

// Static Binding:
// Binding at compile time
// Dynamic Binding:
// Binding at run-time

/*
 * Polymorphism
 *
 * Up-Casting:
 * Converting a derived class pointer/reference to a base class. By default, in public
 * inheritance, polymorphism (upcasting) is allowed
 * No need for explicit type casting
 * Down Casting:
 * Converting a base class reference to a derived class
 */

template <class Data>
Data calculate(Data a)
{
    return a * a;
}

int main()
{
    cout << "Square of 4: " << calculate(4) << endl;
    cout << "Square of 7.6: " << calculate(7.6) << endl;
    return 0;
}
