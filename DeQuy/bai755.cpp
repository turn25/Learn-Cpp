// Dem so luong chu so le cua so nguyen duong n
#include <iostream>
using namespace std;
int DemSoLe(int);
int main()
{
    int n;
    do
    {
        cout<<"Nhap n: ";
        cin>>n;
    }
    while(n<=0);
    int kq=DemSoLe(n);
    cout<<"So luong chu so le cua "<<n<<" la: "<<kq<<endl;
    return 0;
}
int DemSoLe(int n)
{
    if (n!=0)
    {
        if((n%10)%2!=0)
            return 1+DemSoLe(n/10);
        return DemSoLe(n/10);
    } 
    return 0;
}
