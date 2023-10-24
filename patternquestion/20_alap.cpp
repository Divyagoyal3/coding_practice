#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter";
    cin>>n;
    int i =1;
    while(i<=n){
        int j =1;
        while(j<=n)       // AAA   
                          // BBB        
        {
            char ch ='A'+i-1;
            cout<<ch;
            j++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}