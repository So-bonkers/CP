#include <bits/stdc++.h>
using namespace std;
void pattern(int N)
{
    for (int i = 0; i < N; i++)
    {
        if (i == 0 || i == N - 1)
        {
            for (int j = 0; j < N; j++)
            {
                cout << "*";
            }
        }
        else
        {
            for (int j = 0; j < N; j++)
            {
                if (j == 0 || j == N - 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
}
int main()
{
    int N;
    cout << "Pattern 21: Hollow Rectangle Pattern \nEnter the value of N: ";
    cin >> N;
    pattern(N);
    return 0;
}