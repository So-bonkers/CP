#include <bits/stdc++.h>
using namespace std;
void pattern(int N)
{
    int current_sum = 1;
    for (int i = N; i >= 1; i--)
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
    cout << "Pattern 15: Reverse Letter Triangle Pattern \nEnter the value of N: ";
    cin >> N;
    pattern(N);
    return 0;
}