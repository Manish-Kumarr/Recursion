#include <bits/stdc++.h>
using namespace std;

void midDel(stack<int> &st, int k)
{
    if (k == 1)
    {
        st.pop();
        return;
    }
    int temp = st.top();
    st.pop();
    midDel(st, k - 1);
    st.push(temp);
}

int main()
{
    stack<int> st;
    st.push(6);
    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);
    int k = st.size() / 2 + 1;
    midDel(st, k);
    while (st.size() != 0)
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}
