#include <iostream>

using namespace std;

class Human{
private:
    string name;
    int age;

public:
    /*Human(){
        cout<<"default constructor"<<endl;
        name="unknown";
        age=0;
    }*/
    Human(string iname="unknown",int iage=0){    //  default parameter constructor
        cout<<"overloaded constructor"<<endl;
        name=iname;
        age=iage;
    }
    void speakup(){
        cout<<name<<" "<<age<<endl;
    }

};
int main()
{
    Human obj1("prashant",25);
    obj1.speakup();
    Human obj2("rawat");
    obj2.speakup();

    Human obj3; //  default parameter constructor called
    obj3.speakup();
}
