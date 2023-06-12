#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    // sorted unique values in sorted order
    set<int> s;
    s.insert(10);
    s.insert(40);
    s.insert(40);
    s.insert(20);
    s.insert(34);
    s.insert(100);

    set<int>::iterator it = s.begin();
    s.erase(100);
    for (; it != s.end(); it++)
    {
        cout << *it << endl;
    }
    cout << endl;
    s.erase(s.begin(), s.find(30));
    for (it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    s.clear();

    // for reverse
    set<int, greater<int>> gg;

    gg.insert(80);
    gg.insert(30);
    gg.insert(60);
    gg.insert(20);
    gg.insert(50);
     gg.insert(50);
      gg.insert(10);

      set<int , greater <int> > :: iterator itr;

      for(itr = gg.begin(); itr!=gg.end(); itr++)
{
    cout<<*itr<< " ";
}
cout<<endl;
    return 0;
}