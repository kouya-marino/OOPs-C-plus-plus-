#include <iostream>
#include<string>
using namespace std;

class Human{
string name;
int age;

public:
    Human(string iname,int iage){
        name =iname;
        age=iage;
    }
    void tellme(){
        cout<<name<<" "<<age<<endl;
    }
    friend void display(Human man); //declaration only, Friend indicate that it can access the all member function of this class outside

};

void display(Human man){
    cout<<man.name<<" "<<man.age<<endl;
}

int main()
{
    Human obj1("prashant",24);
    display(obj1);
    Human obj2("rawat",25);
    display(obj2);
}
