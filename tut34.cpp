#include<iostream>
using namespace std;

class number{
    int a;
    public:
    number(){
        a=0;
    }
    number(int val1){
        a=val1;
    }
    number(number &obj){
        cout<<"copy constructor called !";
        a=obj.a;
    }
    void display(){
        cout<<"the value for a is "<<a<<endl;
    }
};
int main(){
    number o1,o2(23),o5;
    o1.display();
    o2.display();

    number o3(o2);
    o3.display();

    number o4=o2;
    o4.display();

    o5=o2;
    o5.display();
    
    return 0;
}