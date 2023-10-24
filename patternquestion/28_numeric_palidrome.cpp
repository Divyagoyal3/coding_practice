#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int r=0; r<n; r++)
    {
        for(int c=0; c<n-r; c++)
        {
            cout<<" ";
        }
        for(int c=0; c<r+1; c++)
        {
            cout<<" "<<c+1;
        }
        for(int c=r+1; c>1; c--)
        {
            cout<<" "<<c-1;
        }
        cout<<endl;
    }
    return 0;
}