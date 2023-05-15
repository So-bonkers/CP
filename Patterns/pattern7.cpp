#include <bits/stdc++.h>
using namespace std;
void pattern (int N)
{
    for (int i = 0; i <N; i++)
    {
        for (int j = 0; j < N-i-1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2*i+1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    int N;
    cout << "Pattern 7: Star Pattern \nEnter the value of N: ";
    cin >> N;
    pattern(N);
    return 0;
}