//Tim uoc chung lon nhat cua 2 so nguyen duong a,b
#include <iostream>
#include <cmath>
using namespace std;
int UocChungLN(int,int);
int main()
{
    int a,b;
    cin>>a>>b;
    int kq=UocChungLN(a,b);
    cout<<kq;
    return 0;
}
int UocChungLN(int a,int b)
{
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
    return ucln;
}