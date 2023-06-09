#include <iostream>
using namespace std;
int main()

{
    int arr[] = {0, 0, 1, 0, 0, 1, 1, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 0};
    int size = 18;
    int numzero = 0;
    int numone = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            numzero++;
        }
        else
        {
            numone++;
        }
    }
    cout << "\n  nmuber of zeros:"
         << numzero << endl;
    cout << "\n number of ones:"
         << numone << endl;
    return 0;
}