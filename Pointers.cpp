#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    cout << sizeof(a) << endl;
    cout << a << endl;
    cout << &a << endl;

    // Everything is always executed at runtime
    // &: rsand: Address Operator. Never Processable in a string since
    // is handled differently with /0 at the end

    // 0 is no place holder in memory

    // Pointer Variable:
    // Special kind of Variable; has no datatype
    // Holds address of a variable

    // Declaration: [data type]* [name];
    int *ptr, x = 5;
    ptr = &x;
    cout << *ptr << endl;

    // Interview:: Size of a pointer?
    //  Based on System Architecture: x32 has 4bit and x64 has 8bit
}