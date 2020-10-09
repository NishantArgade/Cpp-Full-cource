#include<iostream>
using namespace std;


// template<class T>
// class Harry{
//     public:
//      T data;
//      Harry(T a){
//          data =a ;
//      }
//   void display();
// };
//    template<class T>
//      void Harry<T>::display(){
//     cout<<data;}

    void func(int a){
        cout<<"i am first func"<<a<<endl;
    }
    template<class T>
    void func(T a){
        cout<<"i am templatized func"<<a<<endl;
    }
int main(){
    // Harry<char> h('p');
    // // cout<<h.data;
    // h.display();
    
    func(8);
    
    return 0;
}