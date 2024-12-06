#include <stdio.h>

int main()
{
    // c-style type casting
    float f = 69.420;
    int i = (int)f;
    printf("f: %f, i: %d\n", f, i);

    // to char
    char c = (char)i;
    printf("c: %c\n", c);

    return 0;
}

