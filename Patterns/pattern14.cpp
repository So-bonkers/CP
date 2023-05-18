#include <bits/stdc++.h>
using namespace std;
void pattern(int N)
{
    int current_sum = 1;
    for (int i = 1; i <= N; i++)
    {
        for (char j = 0; j < i; j++)
        {
            cout << char(j+65) << " ";
        }
        cout << endl;
    }
}
int main()
{
    int N;
    cout << "Pattern 14: Increasing Letter Triangle Pattern \nEnter the value of N: ";
    cin >> N;
    pattern(N);
    return 0;
}