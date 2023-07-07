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
        bool swapp = false;
        for( int j = 0; j< n-i ; j++)
        {
            swapp = true;
            if(arr[j] > arr[j+1])
           swap(arr[j],arr[j+1]);
        }
        if(swapp == false)
        {
            break;
            // already sort no need to traverse again
        }
    }
     for(int i =0; i < n ; i++)
     {
        cout<<arr[i]<<" ";
     }
     cout<<endl;
    return 0;
}