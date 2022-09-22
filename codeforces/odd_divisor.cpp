#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if ((n & (n - 1)) == 0)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}