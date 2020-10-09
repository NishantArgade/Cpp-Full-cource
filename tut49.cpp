#include<iostream>
using namespace std;


class test{
    int a; //1//order of preference depend on order of decleration var in private section//
    int b;  //2//
    public:
    test(int x, int y):a(x),b(y){}  //---------->.right
    //
    //instade of this
    //{
    //     // a=x;
    //     // b=y;
    // }
    // test(int x, int y):b(x),a(b+x){//--------->.wrong
    //     // a=x;
    //     // b=y;
    // }
    void show_data(){
        cout<<"constructor is called "<<endl;
           cout <<"the value of a is "<<a<<endl<<"and b is "<<b<<endl;
    }
};
int main(){
    test obj1(2,3);
    obj1.show_data();
    

    return 0;
}

// #include <iostream>
// using namespace std;
// /*
// Syntax for initialization list in constructor:
// constructor (argument-list) : initilization-section
// {
//     assignment + other code;
// }

// class Test{
//     int a;
//     int b;
//     public:
//         Test(int i, int j) : a(i), b(j){constructor-body}
// };

// */
// class Test
// {
//     int a;
//     int b;

// public:
//     // Test(int i, int j) : a(i), b(j)
//     // Test(int i, int j) : a(i), b(i+j)
//     // Test(int i, int j) : a(i), b(2 * j)
//     // Test(int i, int j) : a(i), b(a + j)
//     // Test(int i, int j) : b(j), a(i+b) -->RED Flag this will create problems because a will be initialized first
//     Test(int i, int j) : b(j), a(i+b)
//     {
//         // a = i;
//         // b = j;
//         cout << "Constructor executed"<<endl;
//         cout << "Value of a is "<<a<<endl;
//         cout << "Value of b is "<<b<<endl;
//     }
// };

// int main()
// {
//     Test t(4, 6);

//     return 0;
// }