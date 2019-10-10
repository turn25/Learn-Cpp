// Tim chu so hang tram cua so nguyen duong n
#include <iostream>
#include <math.h>
using namespace std;
int HangTram(int);
int main()
{
    int n;
    cin>>n;
    int kq=HangTram(n);
    cout<<kq;
    return 0;
}
int HangTram(int n)
{
    int ht=n%1000/100;
    return ht;
}