#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
//     vector<vector<int> >arr;

//     vector<int>a{1,2,3};
//     vector<int>b{1,2,3};
//     vector<int>c{1,2,3};

//   arr.push_back(a);
//   arr.push_back(b);
//   arr.push_back(c);

//   for(int i =0; i<arr.size(); i++)
//   {
//     for(int j =0; j<arr[i].size(); j++)  // arr[0].size() will work only in case when columns are equal
//     {
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
//   }

vector<vector<int> > arr(3, vector<int>(5,0));

for(int i =0; i<arr.size(); i++)
  {
    for(int j =0; j<arr[i].size(); j++)  // arr[0].size() will work only in case when columns are equal
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  vector<vector<int> > arr1(5, vector<int>(5,-8));
  for(int i =0; i<arr1.size(); i++)
  {
    for(int j =0; j<arr1[i].size(); j++)  // arr[0].size() will work only in case when columns are equal
    {
        cout<<arr1[i][j]<<" ";
    }
    cout<<endl;
  }
    return 0;

}