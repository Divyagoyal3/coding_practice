#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0 ; i<n; i++)
    {
        cin>>v[i];
    }
    int x =v[n-1];
    int z=v.size();
    for(int i =z-1; i>0; i--)
    {
        v[i]=v[i-1];
    }
    v[0]=x;
    cout<<endl;
    for(int i=0;i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}