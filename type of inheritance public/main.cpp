#include <iostream>
#include<string>
using namespace std;

class Person{
protected:
    string name;
public:
    void setName(string iname){
        name = iname;
    }
};

class Student : public Person{     //Public Inhertance
    public:
        void display(){
            cout<<name<<endl;
        }
};


int main()
{

  Student obj1;
  obj1.setName("Prashant");
  obj1.display();

}
