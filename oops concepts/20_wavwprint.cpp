#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void printmatrix(vector<vector<int>>v)
{
    int m=v.size();
    int n=v[0].size();
    for(int startcol=0;startcol<n; startcol++)
    {
        if((startcol & 1)==0){
            for(int i =0; i<m; i++){
                cout<<v[i][startcol]<<" ";
            }
        }
        else{
            for(int i=m-1; i>=0; i--){
                cout<<v[i][startcol]<<" ";
            }
        }
    }

}
int main()
{
    vector<vector<int>>v{
   {1,2,3},
   {3,4,5},
   {5,6,7}
    };
    printmatrix(v);
    return 0;
}