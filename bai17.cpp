// Tinh x^11 voi so luong phep nhan toi thieu
#include <iostream>
using namespace std;
int main()
{
    double x;
    cin>>x;
    double x2=x*x;
    double x4=x2*x2;
    double x8=x4*x4;
    double x11=x8*x4/x;
    cout<<x11;
    return 0;
}
