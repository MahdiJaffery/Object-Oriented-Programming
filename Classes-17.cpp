#include <iostream>
using namespace std;

// Template specialization example

template <class T>
class Test
{
    T a;

public:
    Test()
    {
        cout << "Test Class Constructor\n";
    }
};

template <>
class Test<char>
{
    char a;
    int b;

public:
    Test()
    {
        cout << "Specialized Test Class Constructor\n";
    }
};

int main()
{
    Test<double> Object1; // Calls the general template constructor
    Test<char> Object2;   // Calls the specialized template constructor
    return 0;
}
