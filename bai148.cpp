//Kiem tra n co la so toan chan
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int flag=1;
    for(int t=n;t!=0;t=t/10)
    {
        int dv=t%10;
        if (dv%2!=0)
            flag=0;
    }
    if(flag==1)
        cout<<"Toan chan";
    else
        cout<<"KO toan chan";
    return 0;
}