//Xuat day Hailstone
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int at,ahh,n;
    cin>>n;
    at=n;
    while(at/2>1&&(3*at+1)>1)
    {
        if(at%2==0)
            ahh=at/2;
        else
            ahh=3*at+1;
        cout<<ahh<<" ";
        at=ahh;
    }
    return 0;
}