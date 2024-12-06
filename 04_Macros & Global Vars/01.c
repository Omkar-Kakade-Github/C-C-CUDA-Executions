#include <stdio.h>

// examples for each conditional macro
// #if, #elif, #else, #endif, #ifdef, #ifndef

#define PI 3.14159
#define AREA(r) (PI * r * r)

#ifndef radius
#define radius 10
#endif

#if radius > 15
#define radius 15
#elif radius < 5
#define radius 5
#else
#define radius 10
#endif


int main()
{
    printf("Area of circle with radius %d: %f\n", radius, AREA(radius)); // Output: 314.159000

}
