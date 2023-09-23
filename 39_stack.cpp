#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>st;
    st.push(20);
    st.push(70);
    st.push(90);

    // pop first element
    st.pop();

    cout<<st.top()<<endl;

    cout<<"size of stack is:"<<st.size()<<endl;

    // stack empty
    if(st.empty())
    {
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }

   return 0;
}

// to print from the top of the stack

// st.push(98);
// st.push(78);
// st.push(19);
// st.push(10);
// while(!s.empty())
// {
//     cout<<st.top()<<endl;
//     st.pop();
// }