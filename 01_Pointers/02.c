#include <stdio.h>

int main()
{
    int value = 42;
    int* ptr1 = &value;
    int** ptr2 = &ptr1;
    int*** ptr3 = &ptr2;

    printf("Value: %d\n", value); // value of value
    printf("ptr1: %p\n", ptr1); // address of value
    printf("ptr2: %p\n", ptr2); // address of ptr1
    printf("ptr3: %p\n", ptr3); // address of ptr2
    printf("Value: %d\n", ***ptr3); // value of value
    printf("Address of ptr1 through ptr3: %p\n", **ptr3); // value of value

    return 0;
}
