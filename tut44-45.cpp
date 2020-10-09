#include<iostream>
using namespace std;

class student{
    protected:
    int roll_no;
    public:
    void set_roll_no(int a){
        roll_no=a;
    }
    
};
class test:virtual public student{
    protected:
    float math;
    float physics;
    public:
    void set_marks(float n,float p){
        math=n;
        physics=p;
    }
    
};
class sport:virtual public student{
    protected:
    int score;
    public:
    void set_score(int s){
        score=s;
    }
    
};
class result:public sport,public test{
    protected:
    int total;
    public:
    void display(void){
        cout<<"all details of student is"<<endl;
        cout<<endl;
        cout<<"the roll no of student is "<<roll_no<<endl;
        cout<<"the math marks is "<<math<<endl;
        cout<<"the physics marks is "<<physics<<endl;
        cout<<"the sport score  is "<<score<<endl;
        cout<<"the totol marks of student is "<<math+physics+score<<endl;
    }
    
};

int main(){
    result nisha;
    nisha.set_roll_no(03);
    nisha.set_marks(90.14,80.43);
    nisha.set_score(9);
    nisha.display();
    return 0;
}