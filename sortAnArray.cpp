#include <bits/stdc++.h>
using namespace std;

void insort(vector<int> &v, int temp)
{
    if (v.size() == 0 || v[v.size() - 1] <= temp)
    {
        v.push_back(temp);
        return;
    }
    int val = v[v.size() - 1];
    v.pop_back();
    insort(v, temp);
    v.push_back(val);
}

void sortArray(vector<int> &v)
{
    int n = v.size();
    if (n == 1)
        return;
    int temp = v[v.size() - 1];
    v.pop_back();
    sortArray(v);
    insort(v, temp);
}

int main()
{
    vector<int> v = {0, 4, 1, 5, 2, 3};
    sortArray(v);
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    return 0;
}
