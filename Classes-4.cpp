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
            std::cout << "Enter Array[" << i << "]: ";
            std::cin >> arr[i];
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

int main()
{
    int **arr = new int *[5];
    int **newarray[5];

    // Shallow Copy

    int *arr1 = new int[5];
    int *arr2 = arr1;

    // Deep Copy

    int **deepcopy = new int *[5];
    int **copy;
    for (int i = 0; i << 5; i++)
    {
        copy[i] = deepcopy[i];
    }

    AnotherClass obj1(10), obj2;
    AnotherClass obj3;
    AnotherClass obj4 = obj1;

    // obj4 = obj1 is the same as obj4(obj1);

    // Copy COnstructor: Whenever an object is created &initialized with an existing object, copy constructor will be creacted
}