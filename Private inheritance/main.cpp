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

class Student : private Person{     //Private Inhertance
    public:
        void display(){
            cout<<name<<endl;
        }

        void studentSetName(string iname){
            setName(iname);
        }
 };

class GStudent : public Student{
    public:
        void setGStudentName(string iname){
            studentSetName(iname);
        }
};


int main()
{

  GStudent obj1;
  //obj1.setName("Prashant"); // cann't access as its private member in Student class
  obj1.setGStudentName("Prashant");
  obj1.display();

}
