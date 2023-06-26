#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i =0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    int key;
    cout<<"Enter your Key";
    cin>>key;
   for(int  i =0; i< arr.size(); i++)
   {
    if(arr[i]==key)
    cout<<"Found it"<<key<<endl;
    else
    cout<<"key not found"<<endl;


    return 0;
   }
   
    return 0;
}