#include <stdio.h>

int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};

    int* ptr = arr1;    // pointer to the first element of arr1 
    int* ptr2 = arr2;   // pointer to the first element of arr2

    int* matrix[] = {ptr, ptr2}; // array of pointers to the first elements of arr1 and arr2

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", *matrix[i]++);
        }
        printf("\n");
    }

    return 0;
}


