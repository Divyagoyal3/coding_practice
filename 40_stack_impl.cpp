#include<iostream.h>
#include<bits/stdc++.h>
using namespace std;

class stack{
public:
int *arr;
int top;
int size;

Stack(int size)
{
    arr  = new int [size];
    this->size = size;
    top = -1;
}

// function 
void push(int data)
{
if(size - top >1)
{
    top++;
    arr[top] = data;
}
else{
    cout<<"Stack Overflow"<<endl;
}
}
void pop()
{
    if(top == -1)
    {
        cout<<"Stack Underflow, cannot delete element"<<endl;
    }
    else{
        top--;
    }

}

int gettop()
{
if(top == -1)
{
    cout<<"There is No element in Stack"<<endl;
}
else{
    return arr[top];
}
}
int getsize()
{
 return top +1;
}

bool isempty()
{
    if(top == -1)
    {
        return true;
    }
    else{
        return false;
    }
}

};




int main()
{
    Stack s;

    s.push(10);
    s.push(20);
    s.push(40);
    s.push(10);
    while(! s.isEmpty()){
        cout<<s.getTop()<<" ";
        s.pop();
    }


    cout<<"Size of Stack"<<s.getsize()<<endl;
    return 0;
}