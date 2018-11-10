#include <iostream>

using namespace std;

class Human{
public:
    Human(){
        cout<<"Constructor called"<<endl;
    }

    ~Human(){
        cout<<"Destructor called"<<endl;
    }
};

int main()
{
    Human *obj1;
    obj1=new Human();
    cout<<"object in heap"<<endl;
    delete obj1; // to call destuctor
    return 0;
}
