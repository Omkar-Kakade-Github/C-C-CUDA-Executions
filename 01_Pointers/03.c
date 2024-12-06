#include <stdio.h>

int main()
{
    int num = 10;
    float fnum = 3.14159;
    void* vptr;

    vptr = &num;
    printf("Value of num: %d\n", *(int*)vptr); // typecasting and dereferencing

    // vptr is a memory address "&num" but it is stored as a void pointer (no data type)
    // We can't dereference a void pointer, so we cast it to an integer pointer to store the integer value at that memory address "(int*)vptr"
    // Then we dereference it with the final asterisk "*" to get the value "*((int*)vptr)"

    vptr = &fnum;
    printf("Value of fnum: %f\n", *(float*)vptr); // typecasting and dereferencing

    return 0;
}

// void pointers are used when we don't know the data type of the memory address
// malloc() returns a void pointer but we see it as a pointer to a specific data type after the cast (int*)malloc(4) or (float*)malloc(4) etc.
