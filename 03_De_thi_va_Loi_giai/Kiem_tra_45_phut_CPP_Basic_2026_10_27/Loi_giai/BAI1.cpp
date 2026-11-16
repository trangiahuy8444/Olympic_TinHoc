#include <iostream>
using namespace std;

int demAm(int a[], int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
        if (a[i] < 0) dem++;
    return dem;
}

int main()
{
    int n, a[1000], tongDuong = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > 0) tongDuong += a[i];
    }
    cout << tongDuong << " " << demAm(a, n) << '\n';
    return 0;
}
