#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int size_string = s.size();
    int i,n,k[300];
    for (auto i:s)
    {
        k[i] ++;
    }
    while (i++ <300)
    {
        if(!k[i]%2)
        {
            n++;
        }
    }
    cout << (n%2 || !n? "First":"Second"); 
    return 0;
}