//Kiem tra so tu nhien n co phai so doi xung
#include <iostream>
#include <cmath>
using namespace std;
int SoDoiXung(int);
int main()
{
    int n;
    cin>>n;
    int kq=SoDoiXung(n);
    if(kq==n)
        cout<<"DX";
    else
        cout<<"KO DX";
    return 0;
}
int SoDoiXung(int n)
{
    int dn=0;
    for(int t=n;t!=0;t=t/10)
    {
        int dv=t%10;
        dn=dn*10+dv;
    }
    return dn;
}