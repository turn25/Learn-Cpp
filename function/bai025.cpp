// Hoan vi 2 so nguyen a,b
#include <iostream>
#include <math.h>
using namespace std;
void HoanVi(int,int);
int main()
{
    int a,b;
    cin>>a>>b;
    HoanVi(a,b);
    return 0;
}
void HoanVi(int a,int b)
{
    int c=a;
    a=b;
    b=c;
    cout<<a<<endl<<b;
}