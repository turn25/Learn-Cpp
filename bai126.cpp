//Nhap 2 gia tri thuc a,b . Tim gia tri lon nhat
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a,b;
    cin>>a>>b;
    float sl=a;
    if (sl<b)
        sl=b;
    cout<<sl;
    return 0;
}