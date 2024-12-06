#include <stdio.h>

int main()
{
    int a = 10;
    int* ptr = &a; //& is used to get the address of a

    printf("%d\n", a); // value of a
    printf("%d\n", *ptr); // dereferencing and accessing the value of a
    printf("%p\n", ptr); // address of a
    printf("%p\n", &a); // address of a

    return 0;
}
