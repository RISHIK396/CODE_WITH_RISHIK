#include <iostream>
#include <math.h>
using namespace std;
class triangle
{
    int a, b, c, sum;

public:
    void area(int a1, int b1)
    {
        cout << 0.5 * (a1 * b1) << " is the area of the right angled triangle " << endl;
    }
    void area(int a1, int b1, int c1)
    {
        float s = (a1 + b1 + c1) * 1 / 2;
        float hero;
        hero = (s * (s - a1) * (s - b1) * (s - c1));
        cout << "the area of the the triangle is: " << pow(hero, 1 / 2);
    }
    void set_data(int, int, int);
};
void triangle::set_data(int a1, int b1, int c1)
{
    if (a > 0 || b > 0 || c > 0)
    {
        a = a1;
        b = b1;
        c = c1;
        sum = a + b + c;
    }
    else if (a + b <= c || a + c <= b || c + b <= a)
    {
        throw("sides given wrong");
    }

    else
    {
        throw("invalid syntax");
    }
}
int main()
{
    try
    {
        triangle t1;
        t1.set_data(1, 2, 3);
        t1.area(9, 2);
        t1.area(2, 3, 4);
    }
    catch (...)
    {
        cout << "wrong argument given ";
    }
    return 0;
}
