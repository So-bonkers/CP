#include <bits/stdc++.h>
using namespace std;
void pattern(int N)
{
    int start = 1;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout << j+1;
        }
        for (int k=2*N - 2*i -3; k >= 0; k--)
        {
            cout << " ";
        }
        for (int j = i+1; j >0; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}
int main()
{
    int N;
    cout << "Pattern 12: Number Crown Pattern \nEnter the value of N: ";
    cin >> N;
    pattern(N);
    return 0;
}