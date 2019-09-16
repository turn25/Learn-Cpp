// Hoan vi 2 so nguyen a,b khong su dung so nguyen trung gian
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    a=a-b;
    b=b+a;
    a=b-a;
    cout<<a<<endl<<b;
    return 0;
}
