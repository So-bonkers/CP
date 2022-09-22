#include <bits/stdc++.h>
#include <cstring>
#include <typeinfo>
using namespace std;
int numreversal(int n)
{
    stringstream ss;
    ss << n;
    string s = ss.str();
    reverse(s.begin(), s.end());
    int num = atoi(s.c_str());
    return num;
}
// To efficiently rule out the trailing zeroes when reveresed, convert the number to a string, then perform string reversal and finally convert it back to an integer. P.S. do not use to_string() until your compiler version is gnu c++11. Not higher, not lower
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a,b;
        cin >> a >> b;
        int temp_a = numreversal(a);
        int temp_b = numreversal(b);
        int sum = temp_a + temp_b;
        cout << numreversal(sum) << endl;
    }
    return 0;
}