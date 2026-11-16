#include <iostream>
using namespace std;

// Ham hoan doi 2 so dung tham chieu (&)
void my_swap(long long &u, long long &v) {
    long long temp = u;
    u = v;
    v = temp;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a, b;
    if (cin >> a >> b) {
        my_swap(a, b);
        cout << a << " " << b << "\n";
    }

    return 0;
}
