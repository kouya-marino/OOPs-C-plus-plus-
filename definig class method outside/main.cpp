#include <iostream>

using namespace std;

class Human{
    public:
    string name;
    //string name="noname";
    void intro();
};
//string Human::name="noname";
void Human::intro(){
    cout<<Human::name<<endl;
}

int main(){
    Human obj1;
    obj1.name="prashant";
    Human *obj2= new Human();
    obj2->name="rawat";
    obj1.intro();
    obj2->intro();
}
