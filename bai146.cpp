//Kiem tra so tu nhien n co phai so doi xung
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int dn=0;
    for(int t=n;t!=0;t=t/10)
    {
        int dv=t%10;
        dn=dn*10+dv;
    }
    if(dn==n)
        cout<<"DX";
    else
        cout<<"KO DX";
    return 0;
}