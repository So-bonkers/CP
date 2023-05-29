# include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    float sum=0;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        float p[n]={};
        cin >> p[i];
        sum += p[i];
    }
    cout << sum/n;
    return 0;
}