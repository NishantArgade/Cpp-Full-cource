#include<iostream>
using namespace std;

class c2;//forward decleration
class c1{
    int val1;
friend void exchange(c1 &,c2 &);    
public:
    void set(int a){
    val1=a;}

    void display(){
        cout<<val1<<endl;
    }
};
class c2{
    int val2;
friend void exchange(c1 &,c2 &);
public:
    void set(int b){
    val2=b;}

    void display(){
        cout<<val2<<endl;
    }
};

void exchange(c1 &x,c2 &y){
    int temp=x.val1;
    x.val1=y.val2;
    y.val2=temp;
}
int main(){
    c1 x;
    c2 y;
    x.set(28);
    cout<<"the value of a  is "<<endl;
    x.display();
    y.set(30);
    cout<<"the value of b is "<<endl;
    y.display();
    exchange(x,y);
    cout<<"the value of a after change is "<<endl;
    x.display();
    cout<<"the value of b after change is ";
    y.display();
    return 0;
}