#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string s;
        cin >> s;
        int k = 0;
        for (char ch : s)
            k += ch - '0';
        k = min(k, (int)s.size() - k);
        cout << (k % 2 ? "DA" : "NET") << endl;
    }
    return 0;
}