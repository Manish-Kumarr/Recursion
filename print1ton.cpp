#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
    if (n == 0)
        return;
    // Print N to 1
    cout << n << " ";
    print(n - 1);
    // print 1 to N
    cout << n << " ";
}

int main()
{
    print(10);
    return 0;
}
