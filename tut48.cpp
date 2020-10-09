#include<iostream>
using namespace std;

/*
Case1:
class B: public A{
   // Order of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C{
    // Order of execution of constructor -> B() then C() and A()
};

Case3:
class A: public B, virtual public C{
    // Order of execution of constructor -> C() then B() and A()
};

*/
class base1{

int a;

 public:

 base1(int x){
     a=x;
     cout<<"base1 constructor called "<<endl;
 }

 void print_base1_data(){

       cout<<endl;
     cout<<"base1 constructor value store in a is "<<a<<endl;
}
};

class base2{

int b;

 public:

 base2(int x){
     b=x;
     cout<<"base2 constructor called "<<endl;
 }

 void print_base2_data(){

       cout<<endl;
     cout<<"base2 constructor value store in b is "<<b<<endl;
}
};

class derived:public base2,public base1{  //here is note that order of execution of constructer is in sequential manner.accor case 2  above//

int c;

 public:

 derived(int p,int q,int r):base2(r),base1(q){
     c=p;
 }

 void print_derived_data(){

     cout<<"derived constructor called "<<endl;
       
     cout<<"derived constructor value store in c is "<<c<<endl;
}
};

int main(){
    derived obj1(2,4,5);
    obj1.print_base1_data();
    obj1.print_base2_data();
    obj1.print_derived_data();


    
    return 0;
}