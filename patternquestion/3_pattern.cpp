#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = n-1;
    while (i >=0)
    {
        int j = 0;
        while (j <= i)
        {
            cout << "*";
            j++;
        }
        i--;
        cout << endl;
    }
    return 0;
}