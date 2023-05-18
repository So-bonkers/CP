#include <bits/stdc++.h>
using namespace std;
void pattern(int N)
{
    int current_sum = 1;
    for (int length = 1; length <= N; length++)
    {
        for (int i = 0; i < length; i++)
        {
            cout << char(current_sum + 64) << " ";
        }
        current_sum++;
        cout << endl;
    }
}
int main()
{
    int N;
    cout << "Pattern 16: Alpha-Ramp Pattern \nEnter the value of N: ";
    cin >> N;
    pattern(N);
    return 0;
}