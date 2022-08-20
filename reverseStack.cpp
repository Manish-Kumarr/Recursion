#include <bits/stdc++.h>
using namespace std;

void insort(stack<int> &st, int temp)
{
    if (st.empty())
    {
        st.push(temp);
        return;
    }
    int val = st.top();
    st.pop();
    insort(st, temp);
    st.push(val);
}

void reverseStack(stack<int> &s)
{
    if (s.size() == 1)
        return;
    int temp = s.top();
    s.pop();
    reverseStack(s);
    insort(s, temp);
}

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    reverseStack(s);
    while (s.size() != 0)
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}
