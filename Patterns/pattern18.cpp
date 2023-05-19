#include <bits/stdc++.h>
using namespace std;
void pattern(int N)
{
    for (int i = 1; i <= N; i++)
    {
        for (char j = ('A' + N -i); j <= ('A' + N - 1); j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
int main()
{
    int N;
    cout << "Pattern 18: Alpha-Triangle Pattern \nEnter the value of N: ";
    cin >> N;
    pattern(N);
    return 0;
}