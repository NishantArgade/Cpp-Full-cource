#include<iostream>
using namespace std;
    
int count=0;

class num{
    public:
    num(){
        count++;
        cout<<"the value of count is "<<count<<endl;
    }
    ~num(){
        
        count--;
        cout<<"the value of count is "<<count<<endl;
    }
};
int main(){
    num o1,o2,o3;


    return 0;
}