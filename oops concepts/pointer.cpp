#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int b=9;
    cout << a << " ";
    cout << &a << " ";
    cout<<&b<<endl;

    int c=10;
    //*p p is the pointer to integer data
    int *p = &c;
    cout << p <<endl;
    cout<<&p <<endl;
    cout<< *p<< endl;



    return 0;
}