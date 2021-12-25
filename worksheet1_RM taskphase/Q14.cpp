#include <iostream>
using namespace std;

int greatestcommondivisor(int a, int b)
{
    if (a == 0)
       return b;
    if (b == 0)
       return a;

    if (a == b)
        return a;

    if (a > b)
        return greatestcommondivisor(a-b, b);
    return greatestcommondivisor(a, b-a);
}


int main()
{
    int a = 98, b = 56;
    cout<<"Greatest Common Divisor of "<<a<<" and "<<b<<" is "<<greatestcommondivisor(a, b);
    return 0;
}