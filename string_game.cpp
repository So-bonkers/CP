#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int t, i;
    char s[100];
    scanf("%d ", &t);
    while (t--)
    {
        cin >> (s);
        for (i = 0; i < strlen(s); i++)
            if (i % 2 == 0)
                s[i] = s[i] == 'a' ? 'b' : 'a';
            else
                s[i] = s[i] == 'z' ? 'y' : 'z';
        puts(s);
    }
    return 0;
}