#include <iostream>

using namespace std;

class Human{
private:
    string *name;
    int *age;

public:
    Human(string iname="unknown", int iage=0){
        name =new string;
        age = new int;

        *name =iname;
        *age=iage;
        cout<<"Constructor called and m/m alloted"<<endl;
    }

    void display(){
        cout<<"Hi i am "<<*name<<" and i am "<<*age<<" years old."<<endl;
    }

    ~Human(){
        delete name;
        delete age;
        cout<<"Destructor called and m/m released"<<endl;
    }
};

int main()
{
    Human *obj1=new Human("prashant",24);
    obj1->display();
    delete obj1; // to call destuctor


    Human *obj2=new Human();
    obj2->display();
    delete obj2; // to call destuctor

    return 0;
}
