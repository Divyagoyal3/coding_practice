#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr;
    int ans = (sizeof(arr) / sizeof(int));
    cout << ans << endl;
    // element in vector
    cout << arr.size() << endl;
    // how many elements we are able to store in vector
    cout << arr.capacity() << endl;
    // insert
    arr.push_back(2);
    arr.push_back(5);
    //print
    for(int i =0; i<arr.size(); i++){
        cout<<arr[i]<<" "<<endl;
    }


    //dynamic size
    int n;
    cout<<"size of vector:";
    cin>>n;
    vector<int>brr(n,-1);
    cout<<"size of b"<<brr.size()<<endl;
    cout<<"capacity of b"<<brr.capacity()<<endl;
     //print
    for(int i =0; i<brr.size(); i++){
        cout<<brr[i]<<" ";
    }
    cout<<endl;

    cout<<"\n Printing crr"<<endl;
    vector<int>crr{10,20,30,40};

     //print
    for(int i =0; i<crr.size(); i++){
        cout<<crr[i]<<" ";
    }
    cout<<endl;

    cout<<"\n Vector crr is Empty or not"<<crr.empty()<<endl;
   
   vector<int>drr;
   
    cout<<"\n Vector crr is Empty or not"<<drr.empty()<<endl;


    return 0;
}