#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool comp (char first, char second)
{
    return first>second;
}

bool cmp (int a, int b)
{
    return a>b;
}
int main()
{
    string s ="divya";
    //for printing desc order
    sort(s.begin(),s.end(),comp);
    cout<<s;

    //for printing in  desc order
    cout<<endl;
    vector<int>v{5,8,2,1,4,7,3};
    sort(v.begin(),v.end(),cmp);
    for( auto i :v)
    {
    cout<<i<<" ";
    }
    return 0;
}