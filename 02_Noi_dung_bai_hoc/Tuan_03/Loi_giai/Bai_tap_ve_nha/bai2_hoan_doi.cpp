#include <iostream>
#include <vector>
using namespace std;

// Ham hoan doi 2 so dung truyen tham chieu &
void my_swap(long long &a, long long &b) {
    long long temp = a;
    a = b;
    b = temp;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    // Sap xep noi bot don gian dung ham my_swap
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                my_swap(a[j], a[j + 1]);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";

    return 0;
}
