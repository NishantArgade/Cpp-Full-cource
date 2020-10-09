#include<iostream>
using namespace std;

template<class T>
// float average(T1 a,T2 b){
//    float avg=(a+b)/2.0;
//    return avg;
// }

void swapp(T &a,T &b){
    T temp = a;
    a=b;
    b=temp;
    }

int main(){

//   float A =average(40.75,20.69);
//   cout<<"The average is :"<<A;
      
      char a='c',b='f';//here  data type is changable.
      swapp(a,b);
    cout<<"after swaping the value of a is "<<a<<endl;
    cout<<"after swaping the value of b is "<<b<<endl;
    return 0;
}