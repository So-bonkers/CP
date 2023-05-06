#include <bits/stdc++.h>
using namespace std;

void pattern(int N)
{
    int temp = N;
    for (int i = N; i>0; i--)
    {
        for (int j = N; j>0; j--)
        {
        cout<<"*";
        }
        cout<<endl;
        N--;
    }
}

int main()
{
    int N;
    cout<<"Inverted Right Pyramid\nEnter the number of rows: ";
    cin>>N;
    pattern(N);
    return 0;
}