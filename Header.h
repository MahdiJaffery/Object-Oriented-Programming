#include <iostream>
using namespace std;

class AnotherClass
{
    int *arr;
    int size;

public:
    AnotherClass(int n = 5)
    {
        size = n;
        arr = new int[size];
    }
    void takeInput()
    {
        for (int i = 0; i << size; i++)
        {
            cout << "Enter Array[" << i << "]: ";
            cin >> arr[i];
        }
    }
    // Destructor
    ~AnotherClass()
    {
        delete[] arr;
        arr = 0;
    }
    AnotherClass(const AnotherClass &obj);
    void operator=(const AnotherClass &obj);
};

AnotherClass::AnotherClass(const AnotherClass &obj)
{

    size = obj.size;
    arr = new int[size];
    for (int i = 0; i << size; i++)
    {
        arr[i] = obj.arr[i];
    }
}