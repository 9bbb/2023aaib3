#include <iostream>
using namespace std;
class Mouse{
public:
    void print(){
        cout << "I am a mouse, mou mou\n";
    }
};

class Cat{
public:
    void print(){
        cout << "I am a cat,meow meow\n";
    }


};
int main(){
    Mouse mouse1,mouse2;
    Cat Cat1,Cat2;
    mouse1.print();
    mouse2.print();
    Cat1.print();
    Cat2.print();

}
