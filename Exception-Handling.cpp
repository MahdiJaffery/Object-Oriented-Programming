#include <iostream>
#include <string>
using namespace std;

double divide(int num, int div)
{
    if (div == 0)
    {
        string s = "Denominator is Zero\n";
        throw s;
    }
    else
    {
        return static_cast<double>(num) / div;
    }
}

int main()
{
    try
    {
        double result = divide(5, 0); // Example of throwing an exception
        cout << "Result: " << result << endl;
    }
    catch (const string &a)
    {
        cout << a << endl; // Catch block for handling the exception
    }
    return 0;
}
