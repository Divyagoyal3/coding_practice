#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a{10,20,30,40,70,20};
    int sum =50;
    for (int  i = 0; i < a.size(); i++)
    {
        int e1=a[i];
        for(int j =i+1; j<a.size(); j++)
        {
            int e2=a[j];
            for(int k=j+1; k<a.size(); k++)
            {
                int e3=a[k];
                if(e1+e2+e3==sum)
                {
                    cout<<"Pair found"<<e1<<" "<<e2<<" "<<e3<<endl;
                }
            }
        }
    }
    
    return 0;
}