#include <iostream>
using namespace std;

// Ham tinh luy thua a^b
long long power(long long a, int b) {
    long long res = 1;
    for (int i = 0; i < b; i++) {
        res *= a;
    }
    return res;
}

// Ham kiem tra so nguyen to trong O(sqrt(n))
bool is_prime(long long n) {
    if (n < 2) return false;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long x;
    if (cin >> x) {
        if (is_prime(x)) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
