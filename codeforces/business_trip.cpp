#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, a[12], s = 0;
    cin >> k;
    for (int i = 0; i < 12; i++)
        cin >> a[i];
    sort(a, a + 12);
    if (k == 0)
    {
        cout << "0";
    }
    else
    {
        for (int i = 0; i < 12; i++)
        {
            s += a[11 - i];
            if (s >= k)
            {
                cout << i+1;
                break;
            }
        }
    }
    if (s < k)
    {
        cout << "-1";
    }
}