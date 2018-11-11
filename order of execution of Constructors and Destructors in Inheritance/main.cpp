#include <iostream>

using namespace std;

class Person{   //base class
public:
    Person(){
        cout<<"Constructor of Person class called"<<endl;
    }
    ~Person(){
        cout<<"Destructor of Person class called"<<endl;
    }
};

class Student : public Person{  //derived class
public:
    Student(){
        cout<<"Constructor of Student class called"<<endl;
    }
    ~Student(){
        cout<<"Destructor of Student class called"<<endl;
    }
};

int main()
{
    Student obj1;


}
