//f(x)= 2x^2 +5x +9 (x>=5) va -x^2 +4x +9 (x<5)
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
    if(x>=5)
        fx=2*x*x+5*x+9;
    else
        fx=-2*x*x+4*x-9;
    return fx;
}