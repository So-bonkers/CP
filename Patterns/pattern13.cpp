#include <bits/stdc++.h>
using namespace std;
void pattern(int N)
{
    int current_sum = 1;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << current_sum << " ";
            current_sum += 1;
        }
        cout << endl;
    }
}
int main()
{
    int N;
    cout << "Pattern 12: Increasing Number Triangle Pattern \nEnter the value of N: ";
    cin >> N;
    pattern(N);
    return 0;
}