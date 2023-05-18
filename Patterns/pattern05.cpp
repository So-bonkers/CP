#include <bits/stdc++.h>
using namespace std;
void pattern (int N)
{
    for (int i = N; i >0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    int N;
    cout << "Pattern 5: Inverted Right Pattern \nEnter the value of N: ";
    cin >> N;
    pattern(N);
    return 0;
}