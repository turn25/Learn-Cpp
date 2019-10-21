// Dem so luong chu so cua so nguyen duong n
#include <iostream>
using namespace std;
int Dem(int);
int main()
{
    int n;
    do
    {
        cout<<"Nhap n: ";
        cin>>n;
    }
    while(n<=0);
    int kq=Dem(n);
    cout<<"So luong chu so cua "<<n<<" la: "<<kq<<endl;
    return 0;
}
int Dem(int n)
{
    if (n<10)
        return 1;
    int dem=Dem(n/10);
    return dem+1;
}