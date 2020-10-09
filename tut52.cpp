#include<iostream>
using namespace std;


class shop{
    int id ;
    int price;
    public:
    void setData(int a,int b){
        id=a;
        price=b;
    }
    void getData(){
        cout<<"the id is"<<id<<endl;
        cout<<"the price is"<<price<<endl;
    }

};
int main(){
    int size=3;
    int a,b;
    shop *ptr = new shop[size];
    shop *ptritem = ptr;
    for(int i=0;i<size;i++){
        cout<<"Enter the value of id and price"<<i+1<<endl;
        cin>>a>>b;
        ptr->setData(a,b);
        ptr++;
    }

    for(int i=0;i<size;i++){
        cout<<"the no is"<<i+1<<endl;
        ptritem->getData();
        ptritem++;
    }
    
    return 0;
}