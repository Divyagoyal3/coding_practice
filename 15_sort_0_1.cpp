#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    int n;
    cout<<"\n Enter the size of n :";
    cin>>n;
    vector<int>v(n);
    for(int i =0; i<n; i++)
    {
        cin>>v[i];
    }
    cout<<endl;
     vector<int>ans;
    // for(int i =0; i<n; i++)
    // {
    //     if(v[i]==0)
    //     {
    //         ans.push_back(v[i]);
    //     }
    // }
    // for(int j=ans.size(); j<v.size(); j++)
    // {
    //     ans.push_back(1);
    // }
    // for(int z=0; z<ans.size(); z++)
    // {
    //     cout<<ans[z]<<endl;
    // }


    int start=0;
    int end= v.size()-1;
    int i =0;
    while(start<=end)
    {
        if(v[i]<=0)
        {
         swap(v[start],v[i]);
         start++;
         i++;
        }
        else{
            swap(v[i],v[end]);
            end--;
        }
    }
    for(int z=0; z<v.size(); z++)
    {
        cout<<v[z]<<endl;
    }

    return 0;
}