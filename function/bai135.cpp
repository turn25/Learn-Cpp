//KT nam n co la nam nhuan
#include <iostream>
#include <cmath>
using namespace std;
void KT(int);
int main()
{
    int n;
    cin>>n;
    KT(n);
    return 0;
}
void KT(int n)
{
    if((n%4==0&&n%100!=0)||n%400==0)
        cout<<n<<" la nam nhuan";
    else
        cout<<n<<" ko la nham nhuan";
}