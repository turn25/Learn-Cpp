//Kiem tra n co la so toan le
#include <iostream>
#include <cmath>
using namespace std;
int SoDoiXung(int);
int main()
{
    int n;
    cin>>n;
    int kq=SoDoiXung(n);
    if(kq==1)
        cout<<"Toan le";
    else
        cout<<"KO toan le";
    return 0;
}
int SoDoiXung(int n)
{
    int flag=1;
    for(int t=n;t!=0;t=t/10)
    {
        int dv=t%10;
        if (dv%2==0)
            flag=0;
    }
    return flag;
}