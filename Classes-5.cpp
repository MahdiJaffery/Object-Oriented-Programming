#include <iostream>
#include "Header.h"
using namespace std;

void AnotherClass::operator=(const AnotherClass &obj)
{
    if (arr != nullptr)
    {
        delete[] arr;
        arr = 0;
    }
    size = obj.size;
    arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = obj.arr[i];
    }
    // All Operators except some e.g.(.) can be overloaded
}

int main()
{
    AnotherClass obj1;
    AnotherClass obj2 = obj1;
    AnotherClass obj3(10);

    obj1 = obj3;

    return 0;
}