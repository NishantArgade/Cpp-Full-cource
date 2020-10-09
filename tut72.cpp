#include<iostream>
#include<list>
using namespace std;


void display(list<int> &lst){
    list<int>::iterator lt;
    for(lt=lst.begin();lt!=lst.end();lt++){
        cout<<*lt<<" ";
    }
    cout<<endl;
}


int main(){
    list<int> list1;//list of 0 length
    
    list1.push_back(2);
    list1.push_back(23);
    list1.push_back(24);
    list1.push_back(74);


    list<int> ::iterator iter;
    iter = list1.begin();
    // cout<<*iter<<endl;
    //   iter++;
    //   cout<<*iter<<endl;
    //   iter++;
    //   cout<<*iter<<endl;
    //   iter++;
    //   cout<<*iter<<endl;

   //list operations.

    // list1.pop_front();
    // list1.pop_back();
    // list1.remove(24);
    //  list1.reverse();
    list1.sort();


    list<int> list2(3);//list of size 3.
    list<int>::iterator itr;
    itr = list2.begin();
    *itr=4;
    itr++;
    *itr=5;
    itr++;
    *itr=6;
    itr++;

    list2.sort();
    // display(list2);
    list2.splice(5,30);
    
     list1.merge(list2);
    display(list1);
    return 0;
}