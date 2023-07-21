#include<iostream>
#include<string>
using namespace std;

int getlength(char name[])
{
    int l =0;
    int i =0;
    while(name[i] != '\0')
    {
        l++;
        i++;
    }
    return l;
}
int main()
{
    char name[100];
    cin>>name;
    cout<<getlength(name)<<endl;
    return 0;
}