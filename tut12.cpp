#include<iostream>
using namespace std;

int main(){
    int mark[4]={10,20,30,40};  
   //these are the math marks:
    // cout<<mark[0]<<endl;
    // cout<<mark[1]<<endl;
    // cout<<mark[2]<<endl;
    // cout<<mark[3]<<endl;
   
    //2nd example
    
    // int mathMarks[4];\
    // mathMarks[0] = 2278;
    // mathMarks[1] = 738;
    // mathMarks[2] = 378;
    // mathMarks[3] = 578;

    // cout<<"These are math marks"<<endl;
    // cout<<mathMarks[0]<<endl;
    // mathMarks[1]=500;//===>the value of array can change..
    // cout<<mathMarks[1]<<endl;
    // cout<<mathMarks[2]<<endl;
    // cout<<mathMarks[3]<<endl;
     
     //1. using for loop:
    
    // for(int i=0; (i<4) ; i++){
        
    //     cout<<"the value of marks "<<i<<"  is  "<<mathMarks[i]<<endl;
    // } 
    
    //2 done same with while a loops /////////

    // int i=0;
    // while(i<4){
    //     cout<<"the value of marks "<<i<<" is "<<mathMarks[i]<<endl;
    //     i++;
    // }
    
    //////////3.. same with do while loop /////////////
    
    // int i=0;
    // do{
    //     cout<<"the value of marks "<<i<<" is "<<mathMarks[i]<<endl;
    //     i++;}while(i<4);
  
   //******* /////pointer in array////////////
   
    // int* p=mark;
    // cout<<"the value of the marks[0] is :"<<*p<<endl;
    // cout<<"the value of the marks[1] is :"<<*(p+1)<<endl;
    // cout<<"the value of the marks[2] is :"<<*(p+2)<<endl;
    // cout<<"the value of the marks[3] is :"<<*(p+3)<<endl;
  
//////////increment and decrement in pointer://///////////

//    int* p= mark;
//    cout<<*(p++)<<endl;
//    cout<<*(++p)<<endl;
//    cout<<*(++p)<<endl;

//     return 0;
// }