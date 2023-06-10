#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

int n;
cin>>n;
vector<int>arr(n);
for(int i=0 ;i< n; i++)
{
    cin>>arr[i];
}
cout<<endl;

vector<int>neg;
        int j=0;
        for(int i=0; i<n ; i++)
        {
            if(arr[i]<0) {neg.push_back(arr[i]);}
            else
            {
             arr[j]=arr[i];
             j++;
            }
        }
        for(int i=0; i<neg.size(); i++)
        {
            arr[j]=neg[i];
            j++;
        }

        for(auto i: arr)
        {
            cout<<i<<" ";
        }
        return 0;
}