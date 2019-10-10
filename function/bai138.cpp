//f(x)= -2x^3 +6x +9 (x<0) va 5x-7 (0<=x<=1) va 2x^3 +5x^2 -8x +3 (x>1)
#include <iostream>
#include <cmath>
using namespace std;
int fx(int);
int main()
{
    int x;
    cin>>x;
    int kq=fx(x);
    cout<<kq;
    return 0;
}
int fx(int x)
{
    int fx=0;
    if(x>=0)
    {
        if(x>1)
            fx=2*x*x*x+5*x*x-8*x+3;
        else
            fx=5*x-7;
    }
    else
        fx=-2*x*x*x+6*x+9;
    return fx;
}