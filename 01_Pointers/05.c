#include <stdio.h>

int main()
{
    int arr[] = {14, 25, 37, 49, 51};
    int* ptr = arr; // pointer to the first element of the array

    printf("Address of arr[0]: %p\n", (void*)ptr); // address of the first element of the array
    printf("Value of arr[0]: %d\n", *ptr); // dereferencing the pointer to access the value of the first element of the array

    for (int i = 0; i < 5; i++)
    {
        printf("Address of arr[%d]: %p\n", i, (void*)(ptr + i)); // address of the element at index i
        printf("Value of arr[%d]: %d\n", i, *(ptr + i)); // dereferencing the pointer to access the value of the element at index i
    }

    return 0;
}

// Output: 
    // Position one: 14
    // disclaimer: the memory addresses won't be the same each time you run
    // 12 0x7fff773fe780
    // 24 0x7fff773fe784
    // 36 0x7fff773fe788
    // 48 0x7fff773fe78c
    // 60 0x7fff773fe790

    // notice that the pointer is incremented by 4 bytes (size of int = 4 bytes * 8 bits/bytes = 32 bits = int32) each time. 
    // ptrs are 64 bits in size (8 bytes). 2**32 = 4,294,967,296 which is too small given how much memory we typically have.
    // arrays are layed out in memory in a contiguous manner (one after the other rather than at random locations in the memory grid)
