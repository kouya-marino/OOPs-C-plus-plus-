#include <iostream>
#include <string>

using namespace std;

class Human{
    public:
    string name;
    void intro(){
        cout<<"Hi i am "<<name<<endl;
    }
};
int main(){
    Human obj1;
    obj1.name="prashant";
    Human *obj2= new Human();
    obj2->name="rawat";
    obj1.intro();
    obj2->intro();
}
