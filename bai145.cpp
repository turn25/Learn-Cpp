//Kiem tra so tu nhien n co phai so chinh phuong
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int flag=0;
    for(int i=1;i<=n;i++)
    {
        if(i*i==n)
            flag=1;
    }
    if(flag==1)
        cout<<"CP";
    else
        cout<<"KO CP";
    return 0;
}