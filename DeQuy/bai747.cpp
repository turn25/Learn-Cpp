// Tim uoc so le lon nhat cua so nguyen duong n
#include<iostream>
#include<cmath>
using namespace std;
int UocSoLeLonNhat(int);
int main()
{
    int n;
    do {
        cout<<"Nhap n: ";
        cin>>n;
    } while(n<=0);
    int kq=UocSoLeLonNhat(n);
    cout<<"Uoc so le lon nhat la: "<<kq<<endl;
    return 0;
}
int UocSoLeLonNhat(int n)
{
    if (n%2!=0)
        return n; 
    int k=UocSoLeLonNhat(int(n/2));
    return k;
}