#include <iostream>
#include <string>
using namespace std;

class Person{
protected:
    string name;
public:
    void setName(string iname){
        name = iname;
    }
};

class Student : protected Person{     //Protected Inhertance
    public:
        void display(){
            cout<<name<<endl;
        }
        void setStudentName(string iname){
            setName(iname);
        }
};


int main()
{

  Student obj1;
  //obj1.setName("Prashant"); // cann't access as its protected member in Student class
  obj1.setStudentName("Prashant");
  obj1.display();

}
