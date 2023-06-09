#include<iostream>
using namespace std;

class Animal{
    //state or properties
    private:
int weight;

public:
 string name="Divya Goyal";
 int type;
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
 void setweight(int weight)
{
    this->weight=weight;
}
};
int main()
{
    //static creation of memory stack memory
    // Animal a;
    // cout<<a.name<<endl;
    // a.eat();
    // a.sleep();
    // cout<<"\n Size of empty class is :"<<sizeof(Animal)<<endl;// to track minimum size of class
    // a.setweight(100);
    // int s=a.getweight();
    // cout<<s<<endl;
  

    // dynamic memory allocation use heap storage have huge space
    // new keyword  is used for qallocation of dynamic memory allocation
    //delete keyword is used for deallocating memory of dynamic memory
    //* pointer store on stack memory
    //new store on heap
    Animal *p=new Animal;
    (*p).name="hi";
    (*p).type=100;

   p->name="nidi";
    
    //function
    p->eat();
    p->sleep();

      return 0;
    }