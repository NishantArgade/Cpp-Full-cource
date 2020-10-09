// #include<iostream>
// using namespace std;

// int sum(float a,int b){
//     cout<<"using with two arrgument is ";
//      return a+b;
// };
// int sum(int a,int b,int c){
//     cout<<"using with three arrgument is ";
//     return a+b+c;
// };

// int main(){
//     cout<<"the sum of 3 and 5 "<<sum(3,5)<<endl;//integer can convert into float but float can not convert into integer/
//     cout<<"the sum of 32 and 35 and 45 "<<sum(32,35,45)<<endl;
    
    
    
//     return 0;
// }


#include<iostream>
using namespace std;

//volume of cylinder:
int volume(float r, int h){
    return 3.14*r*r*h;
}

//volume of cube:
int volume(float a){
    return a* a* a;
}
//volume of box:
int volume(float b,int s, int h){
    return b*s *h ;
}
int main(){
    cout<<"the volme of cylinder is :"<<volume(5.5,10)<<endl;//compiler will decided which argument give to the functin.on the basis of no of arrguments.
    cout<<"the volme of cube is :"<<volume(10)<<endl;
    cout<<"the volme of box is :"<<volume(12.2,4,10)<<endl;
    return 0;
}