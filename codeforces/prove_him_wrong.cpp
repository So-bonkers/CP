#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, i = 0;
        cin >> x;
        if (pow(3, x - 1) < 1e9)
        {
            cout << "YES\n";
            while (i < x)
            {
                cout << (int)pow(3, i) << " ";
                i++;
            }
            cout << "\n";
        }
        else
            cout << "NO\n";
    }
}