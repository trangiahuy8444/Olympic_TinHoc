#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    char c;
    cin >> s >> c;
    int hoa = 0, chuSo = 0, soLan = 0;
    for (int i = 0; i < (int)s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z') hoa++;
        if (s[i] >= '0' && s[i] <= '9') chuSo++;
        if (s[i] == c) soLan++;
    }
    cout << hoa << " " << chuSo << " " << soLan << '\n';
    return 0;
}
