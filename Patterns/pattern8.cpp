#include <bits/stdc++.h>
using namespace std;
void pattern (int N)
{
    for (int i = N; i >0; i--)
    {
        for (int j =  N-i; j > 0; j--)
        {
            cout << " ";
        }
        for (int j = 2*i-1; j >0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    int N;
    cout << "Pattern 8: Inverted Star Pattern \nEnter the value of N: ";
    cin >> N;
    pattern(N);
    return 0;
}