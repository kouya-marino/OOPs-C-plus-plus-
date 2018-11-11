#include <iostream>
#include <string>
using namespace std;

void display();

int main()
{
    display();
    display();
    display();
    display();
    display();

}
void display(){
    static int counter = 0; //stored in heap and will be available b/t function calls
    cout<<"display function called " <<++counter<<" times"<<endl;
}
