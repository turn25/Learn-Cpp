//KT so nguyen duong n co dang 5^m (m>=0)
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int flag=0;
    long T=1;
    for(int i=1;i<=n;i++)
    {
        T=T*5;
        if(T==n)
            flag=1;
    }
    if(flag==1)
        cout<<n<<" co dang 5 mu n";
    else
        cout<<n<<" ko co dang 5 mu n";
    return 0;
}