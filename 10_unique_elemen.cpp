#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int findunique(vector<int>v){
    int ans=0;// because 0 xor yo any no is 0   as 1^0=1, 0^0=0;
    for(int i =0; i<v.size();i++)
    {
        ans= ans ^v[i];
    }
    return ans;
}
int main()
{
    int n ;
    cout<<"\n enter th esize of vector:";
    cin>>n;

  vector<int>v(n);
    for(int i =0; i<n; i++)
    {
        cin>>v[i];
    }
     int uniqueelement=findunique(v);

     cout<<"\n Unique element in vector is:"<<uniqueelement<<endl;

    return 0;
}