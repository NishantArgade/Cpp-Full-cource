// #include<iostream>
// using namespace std;

// class base1{
//     public:
//     void greet(void){
//         cout<<"hello,good morning";
//     }
// };
// class base2{
//     public:
//     void greet(void){
//         cout<<"hello,good Night";
//     }
// };

// class derived :public base1,public base2{
//      public:
//      void greet(){
//          base2::greet();
//      }

// };
// int main(){
//     derived o1;
//     o1.greet();
//     return 0;
// }
//---------------------------------------------------------------------------------------------------------------//


#include<iostream>
using namespace std;

class base1{
    public:
    void say(){
        cout<<"Good morning";
    }
};
class derived:public base1{
    public:
    void say(){
        cout<<"Good Night";
    }
};
int main(){
    derived o1;
    o1.say();
    return 0;
}