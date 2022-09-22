# include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    while (cin >> n) {
        if (n == 42) break;
        cout << n << endl;
    }
    return 0;
}
// A pretty straight-forward idea, read the input only as long as it is not 42, and print it out. The while loop is used to read the input until the condition is met, and the break statement is used to break out of the loop.