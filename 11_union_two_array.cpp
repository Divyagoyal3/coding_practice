#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {1, 3, 5, 7, 8};
    int size = 5;
    int arr2[6] = {3, 4, 5, 7, 8, 9};
    int size2 = 6;
    vector<int> v;
    for (int i = 0; i < size; i++)
    {
        v.push_back(arr[i]);
    }
    for (int i = 0; i < size2; i++)
    {
    
        v.push_back(arr2[i]);
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}