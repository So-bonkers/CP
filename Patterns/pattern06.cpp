#include <bits/stdc++.h>
using namespace std;
void pattern (int N)
{
    for (int i = N; i >0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << j+1;
        }
        cout << endl;
    }
}
int main()
{
    int N;
    cout << "Pattern 6: Inverted Number Right Pattern \nEnter the value of N: ";
    cin >> N;
    pattern(N);
    return 0;
}