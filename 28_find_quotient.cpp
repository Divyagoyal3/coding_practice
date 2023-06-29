#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int findquotient (int divisor, int dividend)
{

int s=0;
int e =abs(dividend);
int ans=1;
int mid = s+ (e-s)/2;
while(s<=e)
{
    if(abs(mid*divisor) == abs(dividend))
    {
          ans= mid;
          break;
    }
    if(abs(mid*divisor) >abs(dividend))
    {
        e = mid -1;
    }
    else{
        ans= mid;
        s = mid+1;
    }
    mid =s+(e-s)/2;
}
if((divisor<0 && dividend <0) || (divisor>0 && dividend>0))
{
return ans;
}
else{
    return -ans;
}
}

int main()
{
    int divisor;
    cout<<"Divisor:"<<endl;
    cin>>divisor;
    int dividend;
    cin>>dividend;
    int ans = findquotient(divisor,dividend);
    cout<<"quotient is:"<<ans<<endl;
    return 0;
}