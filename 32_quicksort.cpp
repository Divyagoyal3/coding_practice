#include<iostream>
#include<bits/stdc++.h>
using namespace std; 
int part(vector<int>arr, int low, int high)
{
    int i = (low-1);
    int pivot = arr[high-1];
    for(int j = low ; j <= high ; j++)
    {
    if(arr[j] < pivot)
    {
        i++;
        swap(arr[i], arr[j]);
    }
    }
    swap(arr[i+1], arr[high]);
    return (i+1);
}
void quicksort(vector<int>arr, int low, int high)
{
    if(low<high)
    {
    int pi = part(arr, low, high);
    quicksort(arr,low, pi-1);
    quicksort(arr,pi+1, high);
    }
}
int main()
{
    vector<int>arr{10,80,30,90,40,50,70};
    int n = arr.size();
    quicksort(arr, 0, n-1);
     for( int i = 0 ; i< n ;i++)
     {
        cout<<arr[i]<<" "<<endl;
     }
}