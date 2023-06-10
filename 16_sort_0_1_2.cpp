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
//     cout<<endl;
//      vector<int>ans;
//     for(int i =0; i<n; i++)
//     {
//         if(v[i]==0)
//         {
//             ans.push_back(v[i]);
//         }
//     }
//     for(int j=0; j<n; j++)
//     {
//         if(v[j]==1)
//         {
//             ans.push_back(v[j]);
//         }
//     }
//     for(int k=ans.size(); k<v.size(); k++)
//     {
//         ans.push_back(2);
//     }

//     for(int z=0; z<ans.size(); z++)
//     {
//         cout<<ans[z]<<endl;
//     }

// better one
  int z=v.size();
    int i=0;
    int low=0, high=z-1;
    while(i<=high)
    {
        if(v[i]==0)
        {
            swap(v[i],v[low]);
            low++;
            i++;
        }else if(v[i]==1)
        {

            i++;
        }
        else{
            swap(v[i],v[high]);
            high--;
        }
       
    }
    for(auto i: v)
    {
        cout<<i<<" ";
    }



    return 0; 
}