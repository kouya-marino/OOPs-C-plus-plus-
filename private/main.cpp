#include <iostream>
#include <string>
using namespace std;

class Human
{
private:
    int age;
    int getage()
    {
        return age-5;
    }
public:
    void displayage()
    {
        cout<<getage()<<endl;
    }
    void setage(int val)
    {
        age=val;
    }
};

int main()
{
    Human obj1;
    obj1.setage(25);
    obj1.displayage();
}
