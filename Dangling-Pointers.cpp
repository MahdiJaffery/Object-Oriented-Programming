#include <iostream>
using namespace std;

int main()
{
    // Dynamic Memory Allocation
    // Static Memory Allocation (SMA): Allocates Memory on Stack

    // Dynamic Memory Allocation (DMA): Allocates Memory on Heap
    // Stack and Heap are both parts of main memory

    int *ptr = new int;
    *ptr = 10;
    delete ptr; // Goes into pointer and deletes

    // Dangling Pointer: A Pointer that holds the memory address of a memory that doesn't exist
    // To avoid dangling pointers:

    int *ptr2 = new int;
    *ptr2 = 0;
    ptr2 = nullptr; // Or
}