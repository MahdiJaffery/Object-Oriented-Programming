#include <iostream>
using namespace std;

void func(int num)
{
    num = 5;
}
void func2(int &num)
{
    num = 10;
}

void func3(int *p)
{
    *p = 10;
}
void func4(int *&p)
{
    int x = 3;
    p = &x;
    *p = 10;
}
int *func5()
{
    int x = 5;
    return &x;
}

int main()
{
    int arr[5] = {1, 3}; // Rest of the array is stored as 0 {1,3,0,0,0};
    // ^Initializer List
    cout << arr; // Same as cout<<arr[0]; Since Array acts as a pointer and is pointing at 0 index

    int num = 10, *ptr = &num;
    cout << num << endl;
    *ptr = 20; // *: Dereference Operator; Has greater precedence than +
    cout << num << endl;

    int **ptr2 = &ptr;
    cout << *ptr2 << endl
         << **ptr2 << endl;

    int ar[5] = {1, 2, 3, 4, 5};
    cout << ar << endl;
    cout << ar[2] << endl;
    cout << *(ar + 2) << endl; // Same as Array[2]
    cout << *ar + 2 << endl;   // Means Array[0] + 2;

    // Pass By Value & Pass By Reference
    cout << endl
         << endl;
    cout << "Pass By Value &Pass By Reference ";
    cout << endl
         << endl;

    num = 2;
    func(num);
    cout << num << endl;

    func2(num);
    cout << num << endl;

    // Passing and Returning a Pointer to & from a Function
    cout << endl
         << endl;
    cout << "Passing and Returning a Pointer to & from a Function ";
    cout << endl
         << endl;

    num = 2;
    func3(&num);
    cout << num << endl;
    func2(num);
    cout << num << endl;
    cout << func5();

    // Argument: Actual Value
    // Parameter: Value set in the function

    return 0;
}