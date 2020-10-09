#include <iostream>
using namespace std;

int main()
{
    // int a=99;
    // int* pointer=&a;
    // int* pointer=&a;
    //new keyword in pointer//
    int *pointer = new int[3];

    pointer[0] = 35;
    pointer[1] = 88;
    pointer[2] = 55;

    cout << pointer[0] << endl;
    cout << pointer[1] << endl;
    cout << pointer[2] << endl;

    
    delete[] pointer ;
    cout << pointer[0] << endl;
    cout << pointer[1] << endl;
    cout << pointer[2] << endl;

    // cout<<"tddhe  address of is pointer "<<&(a)<<endl;
    // cout<<"the  address of is pointer "<<&(pointer)<<endl;
    // cout<<"the value at address pointer  is "<<*(pointer)<<endl;
    return 0;
}