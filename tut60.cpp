#include<iostream>
#include<fstream>
using namespace std;

/*

The useful classes for working with files  in C++:
1.fstream.
2.ifstream.-->(derived from fstream)
3.ofstream.-->(derived from fstream)

//In order working with files in C++ ,you will have to files primarily.
$ opening of files in C++ there is two types==>
1.using Constructor.
2.using member function open() of the class.

*/

int main(){
    
//open file using Constructor :
  ofstream out("sampleFile60.cpp");//(out is a constructor).


//write in file operation.

  string stg1 = "Hello Nishant"; 
  ofstream out1("sampleFile60.cpp");
   out1<<stg1;
   
//read from file operation.
  string stg2;
  ifstream in("sample2tut60.txt");
  getline(in,stg2);
  getline(in,stg2);
//   in>>stg2; //for word compiler not count word spaces and lines. 

  cout<<"the notes inside in files is "<<endl<<stg2;
   
   
   
    return 0;
}