#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr{1, 3, 5, 7, 8};
    vector<int>arr2{3, 4, 5, 7, 8, 9};

    vector<int> v;
   for(int i =0; i<arr.size(); i++)
   {
    int element=arr[i];
    for (int  j = 0; i <arr2.size(); j++)
    {
        /* code */
        if(element ==arr2[j])
        {
            arr2[j]=-1;
            v.push_back(element);
            
        }
    }
   }


   for(int z=0;z<v.size(); z++)
   {
    cout<<v[z]<<" ";
   }

    return 0;
}    