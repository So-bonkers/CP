#include <bits/stdc++.h>
using namespace std;
bool isPrime (long int num)
{
    if (num <=1)
        return false;
    else if (num == 2)        
        return true;
    else if (num % 2 == 0)
        return false;
    else
    {
        bool prime = true;
        int divisor = 3;
      
        int upperLimit =sqrt(num) +1;
        
        while (divisor <= upperLimit)
        {
            if (num % divisor == 0)
                return false;
            divisor +=2;
        }
        return prime;
    }
}
// The idea is to first rule out any even numbers, then apply normal sqrt method to generate primes till n. Later filter out the primes in the range.
int main()
{
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int m, n;
        cin >> m >> n;
        for (int x=m; x<=n; x++)
        {
            if (isPrime(x))
            {
                    cout << x << endl;
            }
        }
    }
    return 0;
}