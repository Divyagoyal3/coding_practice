#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr{1,6,7,10,14,9};
    int n = arr.size();
    for( int round = 1; round<n ; round++)
    {
        //step A fetch element
        int value = arr[round];
        int j = round-1;
        for(  ;j >=0; j--)
        {
            //step B compare elemenet
            if(arr[j] >value)
            {
                //shift
                arr[j+1] = arr[j];
            }
            else{
                //ruko
                break;
            }
        }
        arr[j+1] = value;
    }

    for( int k =0;  k< n; k++)
    {
        cout<<arr[k]<<" ";
    }
    cout<<endl;
}