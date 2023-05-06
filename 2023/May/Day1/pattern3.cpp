#include <bits/stdc++.h>
using namespace std;

void pattern(int N)
{
    for (int i = 0; i<N; i++)
    {
        for (int j = 0; j<=i; j++)
        {cout<<j+1;}
        cout<<endl;
    }
}

int main()
{
    int N;
    cout<<"Right-Angled Number Pyramid\nEnter the number of rows: ";
    cin>>N;
    pattern(N);
    return 0;
}