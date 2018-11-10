#include <iostream>
#include <string>
using namespace std;

class Human
{
private:
    string name;
    int age;
    int getage()
    {
        return age-5;
    }
public:

    Human(){
        name = "Unknown";
        age=0;
        cout<<"default constructor"<<endl;

    }
    Human(string iname){
        name = iname;//"Unknown";
        age=0;
        cout<<"constructor with name as a parameter"<<endl;

    }
    Human(int iage){
        name = "Unknown";
        age=iage;//0;
        cout<<"constructor with age as a parameter"<<endl;

    }
    Human(int iage ,string iname){
        name = iname;//"Unknown";
        age=iage;//0;
        cout<<"constructor with age and name as a parameter"<<endl;

    }
    void display()
    {
        cout<<getage()<<" ";
        cout<<name<<endl;
    }
    void set(int val,string n)
    {
        age=val;
        name=n;
    }
};

int main()
{
    Human obj1;
    obj1.display();
    Human obj2("prashant");
    obj2.display();
}
