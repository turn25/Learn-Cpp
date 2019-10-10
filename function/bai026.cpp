// Hoan vi 2 so nguyen a,b khong su dung so nguyen trung gian
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
    a=a-b;
    b=b+a;
    a=b-a;
    cout<<a<<endl<<b;
}