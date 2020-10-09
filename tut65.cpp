#include<iostream>
using namespace std;

//Template syntax for two or more parameter==>
//template<class T1,class T2,class T3> (comma seperated)
//T1,T2,T3 is used anywhere if you want to make costom data type(i.e decide there data type after)
template<class T1,class T2,class T3>
class myclass{
    public:
     T1 data1;
     T2 data2;
     T3 data3;

     myclass(T1 a,T2 b,T3 c){
         data1=a;
         data2=b;
         data3=c;
     }
     void display(void){
         cout<<"data1 is "<<this->data1<<endl<<"data2 is "<<this->data2<<endl<<"data3 is "<<this->data3<<endl;
     }
};
int main(){
    myclass<string,char,float> obj("hello nishant",'N',4.5);
    obj.display();
    return 0;
}