#include<iostream>
using namespace std;

class point{
    int x,y;
    public:
    point(int a,int b){//parameterized constructor
        x=a;
        y=b;
    }
    void display(){
        cout<<"the points is"<<"("<<x<<","<<y<<")"<<endl;
    }
    };
int main(){
    point o1=point(3,4);//point o1(3,4);
    o1.display();
    point o2(2,8);
    o2.display();
    return 0;
}