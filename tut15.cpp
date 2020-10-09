#include<iostream>
using namespace std;

//function prototype--> int sum&](int a,int b);
//int sum(int a,int b)--->acceptable
//int sum(int a,b )------->acceptable
//int sum(int , int)----->unacceptable
int sum(int a,int b){//a,b is formal parameters..//formal parameters taking the values from acctual parameters.
    int c=a+b;
    return c;
};
void g(void){//void g() is acceptable
    cout<<"Hello";
}

int main(){
    int num1,num2;//num1 ,num2 is actual parameters.
    cout<<"Enter first number"<<endl;
    cin>>num1;   
    cout<<"Enter second number"<<endl;
    cin>>num2;
    cout<<"the sum is "<<sum(num1,num2);
    g();
    return 0;
}