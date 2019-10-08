//Kiem tra so nguyen duong n co phai so nguyen to
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int dem=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
            dem++;
    }
    if(dem==2)
        cout<<"SNT";
    else
        cout<<"KO la SNT";
    return 0;
}