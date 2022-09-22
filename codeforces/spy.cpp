#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, n, a, b, c;
    for (cin >> n; cin >> n >> a >> b;)
        for (i = 2; i++ < n && cin >> c;)
            a *(c - a || c - b) ? cout << (c - a && c - b ? i : 2 - (a != c)) << ' ', a = 0 : 0;
}