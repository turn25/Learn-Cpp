//f(x)= 2x^2 +5x +9 (x>=5) va -x^2 +4x +9 (x<5)
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float x,fx;
    cin>>x;
    if(x>=5)
        fx=2*x*x+5*x+9;
    else
        fx=-2*x*x+4*x-9;
    cout<<fx;
    return 0;
}