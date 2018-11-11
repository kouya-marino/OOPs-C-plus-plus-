#include <iostream>

using namespace std;

class Person{
protected:
    string name;
public:
    void setName(string iname){
        name = iname;
    }
};

class Student : public Person{
    public:
        void display(){
            cout<<name<<endl;
        }
};


int main()
{

  //Person obj;
  //obj.name="Prashant";  ERROR
  Student obj1;
  obj1.setName("Prashant");
  obj1.display();

}
