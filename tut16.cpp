#include<iostream>
using namespace std;

//Call by Value in C++//
// call by value method is used it doesn’t change the actual values because copies of actual values are sent to the function.

// void swap(int a, int b){ //temp a b
//     int temp = a;        //4   4  5   
//     a = b;               //4   5  5
//     b = temp;            //4   5  4 
// }
// int main(){
//     int x =4, y=5;
//     cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
//     swap(x, y); 
//     cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
//     return 0;
// }

//Call by Pointer in C++

// Call by reference using pointers
void swapPointer(int* a, int* b){ //temp a b
    int temp = *a;          //4   4  5   
    *a = *b;               //4   5  5
    *b = temp;            //4   5  4 
}
int main(){
    int x =4, y=5;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    swapPointer(&x, &y);   //This will swap a and b using pointer reference
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    
    return 0;
    //address will change then value will be change/
}