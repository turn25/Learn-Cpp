#include <iostream>
using namespace std;
void nhap(int[], int &);
int kttinhchat(int[], int);
int main()
{
    int a[50];
    int n;
    nhap(a, n);
    cout<<kttinhchat(a, n);
    return 0;
}
void nhap(int a[], int &n)
{
    do
    {
        cout << "Nhap so phan tu ";
        cin >> n;
    } while (n < 0);
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap a[" << i << "]: ";
        cin >> a[i];
    }
}
int kttinhchat(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int s = 0;
        for (int j = 1; j < a[i]; j++)
        {
            if (a[i] % j == 0)
                s=s+j;
        }
        if (a[i]==s && a[i]<=256)
            return 1;
    }
    return 0;
}