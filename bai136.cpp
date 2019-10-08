//KT nam n co la nam nhuan
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    for(int i=x;i<=y;i=i+4)
    {
        if((i%4==0&&i%100!=0)||i%400==0)
            cout<<i<<" ";
    }
    return 0;
}