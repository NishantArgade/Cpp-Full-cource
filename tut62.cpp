#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //open file using open() finction

    ofstream out;
    out.open("1Sampletut62.txt");
    out<<"this is my 2 file\n";
    out<<"this is my 3file\n";
    out<<"this is my 4file";

    out.close();

    ifstream in;
    in.open("1Sampletut62.txt");
    string st;
    // in>>containt;
    // cout<<containt;
    while (in.eof()==0)
    {getline(in,st);
        /* code */
        cout<<st<<endl;
    }
    


    in.close();

    return 0;
}