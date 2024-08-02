#include <iostream>;
using namespace std;

class A
{
    int num;

public:
    A(int n = 5)
    {
        num = n;
    }
    void setvalue(int value);
};

// Scope Resolution &quot;::&quot;
// Used to define member functions out of class scope
// Syntax; Returntype ClassName :: FunctionName();

void A::setvalue(int value)
{
    num = value;
}
int main()
{
    A obj1, obj2(10);

    // AnotherClass Class in HeaderFile
}