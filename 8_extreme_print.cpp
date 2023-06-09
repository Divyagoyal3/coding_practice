#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int start = 0;
    int end = v.size() - 1;
    while (true)
    {
        if (start > end)
            break;

        if (start == end)
        {
            
            cout << v[start] << " ";
        }
        else
        {
            cout << v[start] << " ";
            cout << v[end] << " ";
        }

        start++;
        end--;
    }
    return 0;
}