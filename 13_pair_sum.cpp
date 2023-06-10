//brute force

#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    vector<int>v1{2,1,6,7};
    vector<int>v2{4,7,8,9};
    int sum=10;
    for(int i =0; i<v1.size(); i++)
    {
        int ele=v1[i];
        for(int j=0; j<v2.size(); j++)
        {
            if(ele +v2[j]==sum)
            {
                cout<<"Pair Found"<<ele<<","<<v2[j]<<endl;
            }

        }
    }
    return 0;
}