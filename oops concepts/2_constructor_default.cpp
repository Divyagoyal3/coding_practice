#include <iostream>
using namespace std;

class study
{
private:
    int weight;

public:
    int age;
    string type;
    int id;
    // default constructor
    study()
    {
        this->weight = 0;
        this->age = 0;
        this->type = "";
        cout << "constructor called" << endl;
    }

    //parameterised constructor
    study(int age)
    {
        this->age = age;
        cout << "Parameterised constructor called" << endl;
    }
    study(int weight, string type)
    {
        this->weight = weight;
        this->type = type;
        cout << "Parameterised constructor-2 called" << endl;
    }

    //copy constructor
      study(study &obj)
    {
        this->weight = obj.weight;
        this->type = obj.type;
        cout << "Parameterised constructor-3 called" << this->weight<<endl;
    }
};

int main()
{
    study s;
    // dynamic allocation
    study *s1 = new study(50);
    study *s2 = new study(101,"divya");

// object copy
    study s3=s;
    //pass as a reff.
    study s4(*s2);
    return 0;
}