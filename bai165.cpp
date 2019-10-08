//Tim so nguyen k lon nhat sao cho 2^k<n voi n la 1 so nguyen duong
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k=0;
    while(pow(2,k)<n)
        k++;
    k=k-1;
    cout<<k;
    return 0;
}