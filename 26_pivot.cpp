#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int findpivot(vector<int>&arr)
{
    int s =0;
    int e =arr.size()-1;
    int mid = s+ (e-s)/2;
    while(s<=e)
    {
        if(arr[mid+1]<arr.size()&&arr[mid]> arr[mid+1])
        {
            return mid;
        }
        if( arr[mid-1] >=0 && arr[mid-1]> arr[mid+1])
        {
            return mid-1;
        }
        if(arr[s] >=arr[mid])
        {
            e= mid-1;
        }
        else{
            s=mid+1;
            mid= s+(e-s)/2;
        }
       
    }
     return -1;
}
int main()
{
    vector<int>arr{3,4,5,6,7,1,2};
    int ans =findpivot(arr);
    cout<<"Pivot  element is:"<<arr[ans]<<endl;
    return 0;
}