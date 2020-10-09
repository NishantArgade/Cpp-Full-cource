#include<iostream>
using namespace std;

class complex{

    int a,b;
    public:
    complex(){
        a=0; 
        b=0;
    }
    complex(int w,int q){
        a=w;
        b=q;
    }
    complex(int s){
        a=s;
        b=10;
    }
    void print();
};
void complex::print(){
    cout<<"the complex  of a and b is  "<<a<<"+"<<b<<"i"<<endl;
}

int main(){
    complex o1(23,34);
    o1.print();

    complex o2(12);
    o2.print();

    complex o3;
    o3.print();

    return 0;
}