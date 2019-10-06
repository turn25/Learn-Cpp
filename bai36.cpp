// S=x^n
#include <iostream>
using namespace std;
int main()
{
    int x,n;
    cin>>x>>n;
    long T=1;
    int i=1;
    while(i<=n)
    {
        T=T*x;
        i++;
    }
    cout<<T;
    return 0;
}
