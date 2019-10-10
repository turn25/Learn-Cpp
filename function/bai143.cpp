//Kiem tra so nguyen duong n co phai so hoan thien
#include <iostream>
#include <cmath>
using namespace std;
int SoHoanThien(int);
int main()
{
    int n;
    cin>>n;
    int kq=SoHoanThien(n);
    if(kq==n)
        cout<<"HT";
    else
        cout<<"KO HT";
    return 0;
}
int SoHoanThien(int n)
{
    int S=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
            S=S+i;
    }
    return S;
}