#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr{1,4,10,8,5,7};
    int n =arr.size();
    //selection sort
    for(int i =0; i< n-1 ; i++)// rounds 
    {
        int minindex = i;
        for( int j = i+1; j< n ; j++)
        {
            if(arr[j] <arr[minindex])
            minindex = j;
        }
        swap(arr[i],arr[minindex]);
    }
     for(int i =0; i < n ; i++)
     {
        cout<<arr[i]<<" ";
     }
     cout<<endl;
    return 0;
}