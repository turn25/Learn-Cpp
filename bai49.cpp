// Liet ke tat ca uoc so cua so nguyen duong n
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        if(n%i==0)
            cout<<i<<" ";
        i++;
    }
    return 0;
}
