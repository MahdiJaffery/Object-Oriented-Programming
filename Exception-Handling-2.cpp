#include <iostream>
using namespace std;

class A
{
    int a;

public:
    class Negative
    {
        int e;

    public:
        Negative(int v) : e(v) {}
        int getNum() const
        {
            return e;
        }
    };

    void set(int n)
    {
        if (n < 0)
        {
            throw Negative(0);
        }
        a = n;
    }
};

int main()
{
    A obj;
    try
    {
        obj.set(-1);
    }
    catch (const A::Negative &n1)
    {
        cout << n1.getNum() << endl; // Handle the Negative exception
    }
    cout << "Okay" << endl;
    return 0;
}
