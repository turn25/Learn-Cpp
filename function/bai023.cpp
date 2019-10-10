// Tim chu so hang chuc cua so nguyen duong n
#include <iostream>
#include <math.h>
using namespace std;
int HangChuc(int);
int main()
{
    int n;
    cin>>n;
    int kq=HangChuc(n);
    cout<<kq;
    return 0;
}
int HangChuc(int n)
{
    int hc=n%100/10;
    return hc;
}