// Kiem tra so nguyen duong n co ton tai chu so chan hay khong?
#include <iostream>
#include <math.h>
using namespace std;
int KT(int);
int main()
{
    int n;
    cin>>n;
    int kq=KT(n);
    if (kq==1)
        cout<<"TT";
    else
        cout<<"Ko TT";
    return 0;
}
int KT(int n)
{
    int flag=0;
    int t=n;
    while(t!=0)
    {
        int dv=t%10;
        if (dv%2==0)
            flag=1;
        t=t/10;
    }
    return flag;
}