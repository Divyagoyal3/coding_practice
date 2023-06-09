#include<iostream>
using namespace std;

class Animal{
    //state or properties
int weight;

public:
 string name="Divya Goyal";
char n;

// behaviour
void sleep(){
    cout<<"Sleep"<<endl;
}
void eat(){
    cout<<"Eat"<<endl;
}
 int getweight(){
    return weight;
 }
 void setweight(int w)
{
    weight=w;
}
};
int main()
{
    Animal a;
    cout<<a.name<<endl;
    a.eat();
    a.sleep();
    cout<<"\n Size of empty class is :"<<sizeof(Animal)<<endl;// to track minimum size of class
    a.setweight(100);
    int s=a.getweight();
    cout<<s<<endl;
    return 0;
}