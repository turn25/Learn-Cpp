//Liet ke tat ca nam nhuan trong khoang [x;y]
#include <iostream>
#include <cmath>
using namespace std;
void KT(int,int);
int main()
{
    int x,y;
    cin>>x>>y;
    KT(x,y);
    return 0;
}
void KT(int x,int y)
{
    for(int i=x;i<=y;i=i+4)
    {
        if((i%4==0&&i%100!=0)||i%400==0)
            cout<<i<<" ";
    }
}