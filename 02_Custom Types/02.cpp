#include <iostream>

using namespace std;

typedef struct
{
    float x;
    float y;
} Point;    

int main()
{
    Point p = {1.2, 4.5};
    cout << "Size of Point: " << sizeof(Point) << endl;
    cout << "Size of p: " << sizeof(p) << endl;
    cout << "Size of p.x: " << sizeof(p.x) << endl;
    cout << "Size of p.y: " << sizeof(p.y) << endl;

    return 0;
}

