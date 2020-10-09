#include<iostream>
using namespace std;
class point{
    int a,b;
    friend int distance(point o1,point o2);
public:
    point(int x,int y){
        a=x;
        b=y;
    }
    void display(){
        cout<<"the points is ("<<a<<","<<b<<")"<<endl;
    }
};
    int distance(point o1,point o2){
    
     point o3;
     o3.display(sqrt(o2.a-o1.a)(o2.a-o1.a),sqrt(o2.b-o1.b)(o2.b-o1.b));
         return o3;
         } 
int main(){
    point o1(0,0);
    point o2(0,0);
    o1.display();
    o2.display();
    point o3;
    o3=distance(o1, o2);
    o3.display();
    return 0;
}