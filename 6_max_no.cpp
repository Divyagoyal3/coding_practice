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
    int maxi=INT_MIN;
    for(int i =0; i<v.size(); i++)
    {
        // if(v[i]>max)
        // {
        //     max=v[i];
        // }
        maxi=max(maxi,v[i]);
    }
    cout<<maxi;
    return 0;
}