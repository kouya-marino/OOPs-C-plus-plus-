#include <iostream>

using namespace std;

class Human{
public:
    static int human_count;
    Human(){
        human_count++;
    }

    void humanTotal(){
        cout<<"there are "<<human_count<<" people in this program"<<endl;
    }
};
int Human::human_count=0;  //always initialize outside class using scope resolution operator(::)
int main()
{
   //cout<<Human::human_count;
   Human obj1;
   Human obj2;
   Human obj3;
   Human obj4;
   Human obj5;
   obj1.humanTotal(); // static varible is shared in program
}
