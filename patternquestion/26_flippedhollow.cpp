#include<iostream>
using namespace std;
int main()
{
    int n ; 
    cin>>n;
    for(int r=0; r<n; r++)
    {
        for(int col=0 ;col<n-r; col++)
        {
         cout<<"*";
        }
        for(int col=0; col<2*r+1; col++)
        {
            cout<<" ";
        }
        for(int col=0 ;col<n-r; col++)
        {
         cout<<"*";
        }
        cout<<endl;
    }
    for(int r=0; r<n; r++)
    {
        for(int col=0; col<r+1; col++)
        {
            cout<<"*";
        }
        for(int col=0; col<2*n-2*r-1; col++)
        {
            cout<<" ";
        }
        for(int col=0; col<r+1; col++)
        {
            cout<<"*";
        }
        cout<<endl;

    }
    
    return 0;
}