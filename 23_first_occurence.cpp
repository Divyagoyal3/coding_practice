#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int binarysearch(vector<int>arr, int key)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = ((e - s) + s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
           e=mid-1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = ((e - s) + s) / 2;
    }
    return ans;
}
int main()
{

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    int key;
    cout << "Enter your Key";
    cin >> key;
    int bsearch = binarysearch(arr, key);
    cout << "first ocuurence" << bsearch << endl;
    
    //lowerbound
    //auto ans= lower_bound(arr.begin(),arr.end(),target))

    return 0;
}