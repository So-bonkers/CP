#include <bits/stdc++.h>
using namespace std;
void pattern(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            cout << " ";
        }
        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for (int j = 1; j <= 2 * i + 1; j++)
        {

            cout << ch;
            if (j <= breakpoint)
                ch++;
            else
                ch--;
        }
        cout << endl;
    }
}
int main()
{
    int N;
    cout << "Pattern 17: Alpha-Hill Pattern \nEnter the value of N: ";
    cin >> N;
    pattern(N);
    return 0;
}