#include <iostream>
#include <string>
using namespace std;

class Person{       //base class
protected:
    string name;
public:
    void setName(string iname){
        name = iname;
    }
};

class Student : private Person{     //Private Inhertance
    public:

        Person :: name;      //Changeing Scope of privately derived member

        void display(){
            cout<<name<<endl;
        }

 };


int main()
{

  Student obj1;
  //obj1.setName("Prashant"); // cann't access as its private member in Student class
  obj1.name="Prashant";
  obj1.display();

}
