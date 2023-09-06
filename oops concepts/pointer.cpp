#include <iostream>
using namespace std;
 
 void update( int * a , int *b)
 {
    *a = 100;
    *b = 200;
 }
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
    

    //pointers
    int arr[4] = {17,4,5,9};
    cout<<arr<<endl;
    cout<<&arr<<endl;
    cout<<arr[0]<<endl;
    cout<<&arr[0]<<endl;

    int  i =0; 
    cout<<i[arr]<<endl;
    cout<<arr[i]<<endl;
    cout<<*(i+arr)<<endl;


    // 
    int arr1[4] = {10,4,20,5};
    int *k = &arr1[1];
    int *l = & arr1[2];
    update(k,l);

    cout<<*k<<endl;
    cout<<*l<<endl;

    for(int i =0; i< 4; i++)
    {
        cout<<arr1[i]<<endl;
    }

    return 0;
}