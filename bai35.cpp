// S=1*2*3*...*n
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long T=1;
    int i=1;
    while(i<=n)
    {
        T=T*i;
        i++;
    }
    cout<<T;
    return 0;
}
