#include <bits/stdc++.h>
using namespace std;
void pattern (int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout << j+1;
        }
        cout << endl;
    }
}
int main()
{
    int N;
    cout << "Pattern 3: Right-Angled Number Pattern \nEnter the value of N: ";
    cin >> N;
    pattern(N);
    return 0;
}