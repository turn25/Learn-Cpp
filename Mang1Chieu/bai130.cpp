#include <iostream>
using namespace std;
void xuat (float [],int );
int main()
{
    float a[50];
    int n;
    xuat(a,n);
    return 0;
}
void xuat (float a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
