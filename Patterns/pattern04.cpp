#include <bits/stdc++.h>
using namespace std;
void pattern (int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout << i+1;
        }
        cout << endl;
    }
}
int main()
{
    int N;
    cout << "Pattern 4: Right-Angled Number Pattern-II \nEnter the value of N: ";
    cin >> N;
    pattern(N);
    return 0;
}