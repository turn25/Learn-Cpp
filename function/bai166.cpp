//Tim so nguyen k nho nhat sao cho 2^k<n voi n la 1 so nguyen duong
#include <iostream>
#include <cmath>
using namespace std;
float KNhoNhat(int);
int main()
{
    int n;
    cin>>n;
    float kq=KNhoNhat(n);
    cout<<kq;
    return 0;
}
float KNhoNhat(int n)
{
    int k=0;
    while(pow(2,k)<n)
        k++;
    return k;
}