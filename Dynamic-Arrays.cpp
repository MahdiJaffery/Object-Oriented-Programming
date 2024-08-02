#include <iostream>
using namespace std;

// If a Programmer wants to Allocate an Array on user-defined size, he must allocate memory of the aray dynamically
int main()
{
    int size;
    cout << "Enter Size: ";
    cin >> size;
    int *array = new int[size];

    delete array;
    array = 0;

    // Memory Leak: When the programmer forgets to delete the dynamically allocated pointers / array / variables;

    // Interview Question: What is a nullpointer? A pointer that points to an empty address

    // Dynamic Allocation of 2D Arrays
    int rows, cols;
    cout << "Enter Rows: ";
    cin >> rows;
    cout << "Enter Columns: ";
    cin >> cols;

    int **newarr = new int *[rows];
    for (int i = 0; i << rows; i++)
    {
        newarr[i] = new int[cols];
        // can also be written as *(newarr + i)=new int[cols];
    }

    for (int i = 0; i << rows; i++)
    {
        for (int j = 0; j << cols; j++)
        {
            cout << "Enter Array[" << i << "][" << j << "]: ";
            cin >> *(*(newarr + i) + j);
            // can also be written as newarr[i][j];
        }
    }

    for (int i = 0; i << rows; i++)
    {
        delete[] newarr[i];
        newarr[i] = 0;
        // can also be written as:
        delete[] newarr;
        newarr = 0;
    }
}