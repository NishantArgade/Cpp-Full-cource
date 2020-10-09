// #include<iostream>
// using namespace std;

// class Employee
// {
//     private:
//         int a, b, c;
//     public:
//         int d, e;
//         void setData(int a1, int b1, int c1); // Declaration
//         void getData(){
//             cout<<"The value of a is "<<a<<endl;
//             cout<<"The value of b is "<<b<<endl;
//             cout<<"The value of c is "<<c<<endl;
//             cout<<"The value of d is "<<d<<endl;
//             cout<<"The value of e is "<<e<<endl;
//         }
// };

// void Employee :: setData(int a1, int b1, int c1){
//     a = a1;
//     b = b1;
//     c = c1;
// }

// int main(){
//     Employee harry;
//     // harry.a = 134; -->This will throw error as a is private
//     harry.d = 34;
//     harry.e = 89;
//     harry.setData(1,2,4);
//     harry.getData();
//     return 0;
// }

#include <iostream>
using namespace std;

class animals
{
private:
    int dog_cost;
    int cat_cost;

public:
    int a;
    int b;
    void setdata(int d1, int c1);
    void getdata()
    {
        cout << "the real prize of dog is  :" << a << endl;
        cout << "the real prize of cat is  :" << b << endl;
        cout << "the cost of dog is :" << dog_cost << endl;
        cout << "the cost of cat is :" << cat_cost << endl;
    }
};
void animals::setdata(int d1, int c1)
{
    dog_cost = d1;
    cat_cost = c1;
}
int main()
{
    animals peat;
    peat.a = 1244;
    peat.b = 4546;
    peat.setdata(500000, 200000);
    peat.getdata();
    return 0;
}