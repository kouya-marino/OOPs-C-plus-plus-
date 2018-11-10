#include <iostream>
#include <string>
using namespace std;

class Human
{
private:
    string name;
    int age;
    int getage()
    {
        return age-5;
    }
public:

    Human(){
        name = "Unknown";
        age=0;
        cout<<"New Object created"<<endl;

    }
    void display()
    {
        cout<<getage()<<" ";
        cout<<name<<endl;
    }
    void set(int val,string n)
    {
        age=val;
        name=n;
    }
};

int main()
{
    Human obj1;
    obj1.set(25,"prashant");
    obj1.display();
    Human obj2;
    obj2.display();
}
