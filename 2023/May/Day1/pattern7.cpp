#include <bits/stdc++.h>
using namespace std;

void pattern(int N)
{
    for (int i = 0; i<N; i++)
    {
        int temp = N-i-1;
        while (temp)
        {
            cout<<" ";
            temp--;
        }
        for (int j=0; j<2*i+1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

int main()
{
    int N;
    cout<<"Star Pyramid\nEnter the number of rows: ";
    cin>>N;
    pattern(N);
    return 0;
}