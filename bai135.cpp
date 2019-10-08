//KT nam n co la nam nhuan
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if((n%4==0&&n%100!=0)||n%400==0)
        cout<<n<<" la nam nhuan";
    else
        cout<<n<<" ko la nham nhuan";
    return 0;
}