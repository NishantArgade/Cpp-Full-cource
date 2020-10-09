#include<iostream>
using namespace std;


//Template syntax for one parameter==>
//template<class T>
//T is used anywhere if you want to make costom data type(i.e decide data type after)
template<class T>
class vector{

    public:
    T * arr;
    int size;
       vector(int m){
           size=m;
           arr = new T[size];
       }
       T dotproduct(vector &v){
           T d=0;
           for(int i=0;i<size;i++){
               d+=this->arr[i]*v.arr[i];//this->arr[i] is of obj v1.
              
           }
           return d;
           
       }
};
int main(){
    // vector v1(3);
    // v1.arr[0]=3;
    // v1.arr[1]=4;
    // v1.arr[2]=6;

    // vector v2(3);
    // v2.arr[0]=0;
    // v2.arr[1]=9;
    // v2.arr[2]=2;

    // int  a= v1.dotproduct(v2);
    // cout<<a;

    vector <float>v1(3);
    v1.arr[0]=3.4;
    v1.arr[1]=4.2;
    v1.arr[2]=6.5;

    vector<float> v2(3);
    v2.arr[0]=0.3;
    v2.arr[1]=9.4;
    v2.arr[2]=2.5;

    float  a= v1.dotproduct(v2);
    cout<<a;


    
    return 0;
}