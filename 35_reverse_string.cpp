#include <iostream>
#include <string>
using namespace std;

int getlength(char name[])
{
    int l = 0;
    int i = 0;
    while (name[i] != '\0')
    {
        l++;
        i++;
    }
    return l;
}
void reversechar(char name[])
{
    int i = 0;
    int n = getlength(name);
    int j = n - 1;
    // while (i<=j)
    // {
    //     /* code */
    //     swap(name[i],name[j]);
    //     i++;
    //     j--;
    // }
    for (; i <= j;)
    {
        /* code */
        swap(name[i], name[j]);
        i++;
        j--;
    }
}
int main()
{

    char name[100];
    cin >> name;
    reversechar(name);
    cout << name << endl;
    return 0;
}