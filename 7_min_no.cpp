#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i =0; i<n ; i++)
    {
        cin>>v[i];
    }
    int mini=INT_MAX;
    for(int i =0; i<v.size(); i++)
    {
        // if(v[i]<mini)
        // {
        //     mini=v[i];
        // }
        mini=min(mini,v[i]);
    }
    cout<<mini;
    return 0;
}