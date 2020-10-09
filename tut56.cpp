#include<iostream>
using namespace std;
//if pointer is of base class then only run base class member function.
class Baseclass{
    public:
      int var_base=29;
     virtual void display(){
          cout<<"the value of base var is "<<var_base<<endl;
      }
};
class DerivedClass : public Baseclass{
  public:
    int var_derived;
    void display(){
        cout<<"the value of derived var is "<<var_derived<<endl;

    }
};
int main(){
    Baseclass obj_base;
    DerivedClass obj_derived;
    
    Baseclass * base_pointer;
    // base_pointer = &obj_base;
    base_pointer = &obj_derived;

    //  base_pointer->var_base= 45;
    //  base_pointer->var_derived= 23; //they throw error as pointer is of base class.they only run our own member function.
     base_pointer->display();
     


    
    return 0;
}