#include <stdio.h>

typedef struct
{
    float x;
    float y;
} Point;

int main()
{
    Point p = {1.2, 4.5};
    printf("Size of Point: %zu\n", sizeof(Point)); // Output: 8 (bytes) -> 64 bits
    printf("Size of p: %zu\n", sizeof(p)); // Output: 8 (bytes) -> 64 bits
    printf("Size of p.x: %zu\n", sizeof(p.x)); // Output: 4 (bytes) -> 32 bits
    printf("Size of p.y: %zu\n", sizeof(p.y)); // Output: 4 (bytes) -> 32 bits

    return 0;
}

