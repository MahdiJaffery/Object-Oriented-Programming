#include <iostream>
#include "Header.h"
using namespace std;

inline void display(int a, int b)
{
    cout << a + b << endl
         << endl;
}
class H
{
    int a;

public:
    H(int n = 3)
    {
        a = n;
    }
    H operator++()
    {
        ++a;
        return *this;
    }
    H operator++(int) /*Dummy Parameter for Pre Increment*/
    {
        H obj1(a);
        a++;
        return obj1;
    }
    H& setH(int n)
    {
        a = n;
    }
    H& getH()
    {
        cout << "OK\n\n";
    }
    void display()
    {
        cout << "Display\n\n";
    }
};
int main()
{
    int a = 5;
    int b = a++;

    cout << b << endl
         << a << endl
         << endl;
    ++a;
    cout << b << endl
         << a << endl
         << endl;
    b = ++a;
    cout << b << endl
         << a << endl
         << endl;

    // Post Increment Returns first, then increments
    // Pre Increment Increments first, then returns

    H obj;
    obj.setH(4).getH().display();

    // Inline Functions
    // keyword returntype functionname();

    display(3, 4);
    display(4, 5);
    display(5, 6);
}