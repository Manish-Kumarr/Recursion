#include <bits/stdc++.h>
using namespace std;

void insort(stack<int> &s, int temp)
{
    if (s.size() == 0 || s.top() >= temp)
    {
        s.push(temp);
        return;
    }
    int val = s.top();
    s.pop();
    insort(s, temp);
    s.push(val);
}

void sortStack(stack<int> &s)
{
    if (s.size() == 1)
        return;
    int temp = s.top();
    s.pop();
    sortStack(s);
    insort(s, temp);
}

int main()
{
    stack<int> s;
    s.push(5);
    s.push(1);
    s.push(14);
    s.push(0);
    s.push(2);
    sortStack(s);
    while (s.size() != 0)
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}
