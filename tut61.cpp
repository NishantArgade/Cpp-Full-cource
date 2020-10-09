#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream nout("sampleTut61.txt");
    string name;
    cin>>name;
    nout<<name;
    nout.close();
     

     ifstream in("sampleTut61.txt");
     string name1;
     in>>name1;
     cout<<name1;
     in.close();



    
    return 0;
}