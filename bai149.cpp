//Tim uoc chung lon nhat cua 2 so nguyen duong a,b
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    a=abs(a);
    b=abs(b);
    while(a*b!=0)
    {
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    int ucln=a+b;
    cout<<ucln;
    return 0;
}