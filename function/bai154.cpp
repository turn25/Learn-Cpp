//Xuat day Hailstone
#include <iostream>
#include <cmath>
using namespace std;
void Hailstone(int);
int main()
{
    int n;
    cin>>n;
    Hailstone(n);
    return 0;
}
void Hailstone(int n)
{
    int ahh;
    int at=n;
    while(at/2>1&&(3*at+1)>1)
    {
        if(at%2==0)
            ahh=at/2;
        else
            ahh=3*at+1;
        cout<<ahh<<" ";
        at=ahh;
    }
}