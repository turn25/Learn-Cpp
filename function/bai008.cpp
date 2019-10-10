// Tinh chu vi da giac deu n canh noi tiep duong tron ban kinh r
#include <iostream>
#include <math.h>
using namespace std;
float ChuVi(int,float);
int main()
{
    int n;
    cin>>n;
    float r;
    cin>>r;
    float kq=ChuVi(n,r);
    cout<<kq;
    return 0;
}
float ChuVi(int n,float r)
{
    float P=2*n*r*sin(M_PI/n);
    return P;
}