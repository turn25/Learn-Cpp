//KT so nguyen duong n co giam dan tu trai sang phai
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int flag=1;
    for(int t=n;t>=10;t=t/10)
    {
        int dv=t%10;
        int dvl=t%100/10;
        if (dvl<=dv)
            flag=0;
    }
    if(flag==1)
        cout<<"Giam dan";
    else
        cout<<"KO giam dan";
    return 0;
}