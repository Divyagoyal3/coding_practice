#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {1, 9, 8, 4, 7, 3};
    int key;
    cin >> key;
    bool flag = 0;
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] == key)
        {
            flag = 1;
            break;
        }
    }
    if (flag)
    {
        cout << "present" << endl;
    }
    else{
        cout<<"Absent"<<endl;
    }
    return 0;
}