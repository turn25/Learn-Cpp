//Tim so nguyen k lon nhat sao cho 2^k<n voi n la 1 so nguyen duong
#include <iostream>
#include <cmath>
using namespace std;
float KLonNhat(int);
int main()
{
    int n;
    cin>>n;
    float kq=KLonNhat(n);
    cout<<kq;
    return 0;
}
float KLonNhat(int n)
{
    int k=0;
    while(pow(2,k)<n)
        k++;
    k=k-1;
    return k;
}