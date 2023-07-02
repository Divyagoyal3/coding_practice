#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 0;
    while (i <2* n)
    {
        int k = i >n ? 2*n -i :i;
        int j = 0;
        while (j < k)
        {
            cout << "*";
            j++;
        }
        i++;
        cout << endl;
    }
    return 0;
}