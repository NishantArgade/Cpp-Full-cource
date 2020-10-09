#include<iostream>
using namespace std;
 
 //1./////structures////////////////
//here memory alloted each data type.
//all data type an executed.

// typedef struct employee//------>here typedef can used to change  stucture variable.
// { /* data */
//    int eid;
//    char favchar;
//    float salary;
// }hp;

// int main(){
//     hp nishant;
//     nishant.eid=3;
//     nishant.favchar='N';
//     nishant.salary=50000000000000;
//     cout<<"the value is "<<nishant.eid<<endl; 
//     cout<<"the value is "<<nishant.favchar<<endl; 
//     cout<<"the value is "<<nishant.salary<<endl; 
//     return 0;
// }

//2.///////union///////////////////////

//it is similar to structure but difference between them is union is batter memory managment. 
//only choose one data type while executing output.

// union money{
//   int rice;
//   char  car;
//   float pound;
// };

// int main(){
//     union money M1;
//     M1.rice=50;
//     cout<<M1.rice;
    
//     return 0;

// }

//3.//enum/////////////////////
//it consist name constant.
//it make program more readable.

int main(){
    enum Meal{breakfast,lunch,dinner};
    Meal M1=breakfast;
    Meal M2=lunch;
    Meal M3=dinner;
  
    cout<<M1<<endl;
    cout<<M2<<endl;
    cout<<M3<<endl;
    
    return 0;
}