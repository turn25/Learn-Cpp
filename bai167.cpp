//Cho n la so nguyen duong. Tim k lon nhat sao cho S(k)<n voi S(k)=0+1+2+...+k
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k=0;
    int S=0;
    while((S+k+1)<n)
    {
        k++;
        S=S+k;
    }
    cout<<k;
    return 0;
}