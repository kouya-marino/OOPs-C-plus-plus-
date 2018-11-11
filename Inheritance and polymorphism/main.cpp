#include <iostream>
#include <string>
using namespace std;

class Person{
    public:
        string name;
        int age;

        void setName(string iname){
            name=iname;
        }
        void setAge(int iage){
            age=iage;
        }

};

class Student : public Person{    // Derived class : Base class
    public:
        int id;
        void setId(int iid){
            id =iid;
        }
        void intro(){
            cout<<"Hi i am "<<name<<" and i am "<<age<<" years old"<<" and my student id is: "<<id<<endl;
        }

};


int main()
{
    Student obj1;
    obj1.setName("Prashant");
    obj1.setAge(24);
    obj1.setId(2017005);

    obj1.intro();

}
