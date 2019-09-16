// Tinh dien tich da giac deu n canh noi tiep duong tron ban kinh r
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    float r;
    cin>>r;
    double S=n*r*r*sin(2*M_PI/n)/2;
    cout<<S;
    return 0;
}
