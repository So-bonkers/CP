#include <bits/stdc++.h>
using namespace std;
void pattern(int N)
{
    int iniS = 2 * N - 2;
    for (int i = 1; i < N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < iniS; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        iniS -= 2;
        cout << endl;
    }
    iniS = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 1; j <= N - i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < iniS; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= N - i; j++)
        {
            cout << "*";
        }
        iniS += 2;
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