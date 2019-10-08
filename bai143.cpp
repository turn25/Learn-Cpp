//Kiem tra so nguyen duong n co phai so hoan thien
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int S=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
            S=S+i;
    }
    if(S==n)
        cout<<"HT";
    else
        cout<<"KO HT";
    return 0;
}