# include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m;
    cin >>t;
    while(t--)
    {
        cin >> n >> m;
        cout << ((n+m)%2? "Burenka" : "Tonya") << endl;
    }
    return 0;
}