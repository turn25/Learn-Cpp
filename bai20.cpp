// Tinh x^14 voi so luong phep nhan toi thieu
#include <iostream>
using namespace std;
int main()
{
    double x;
    cin>>x;
    double x2=x*x;
    double x4=x2*x2;
    double x8=x4*x4;
    double x14=x8*x8/x2;
    cout<<x14;
    return 0;
}
