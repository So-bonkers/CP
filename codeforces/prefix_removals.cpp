#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int n;
    cin >> n;
    while (n--)
    {
        cin >> str;
        int j = 1;
        while (j < str.size())
        {
            if (str[0] == str[j])
            {
                str.erase(0, 1);
                j = 0;
            }
            j++;
        }
        cout << str << endl;
    }
}