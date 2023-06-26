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



    int s=0;
    int e= arr.size()-1;
    int mid=((e-s)+s)/2;
    while(s<=e)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(key < arr[mid])
        {
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=((e-s)+s)/2;
    }
    int z=mid;
    if(z)
    cout<<z<<endl;
    else
    cout<<"not found"<<endl;
    return 0;

}


/// inbuilt binary search function for vectors
// if(binary_search(arr.begin(),arr.end(),findekey))


// for array
//if(binary_search(arr,arr+n,findekey))
///header file algorithm.h