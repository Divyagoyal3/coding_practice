#include<iostream>
#include<string.h>
using namespace std;

void replacechar(char name[])
{
    int n =strlen(name);
    for(int i =0; i< n; i++)
    {
        if(name[i] ==' ')
        {
            name[i] = '@';
        }
    }
}
int main()
{
    char name[1000];
    cin.getline(name,100);
    replacechar(name);
    cout<<name<<endl;
    return 0;
}