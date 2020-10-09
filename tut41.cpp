#include <iostream>
using namespace std;

class base1
{
protected:
    int base1_int;

public:
    void set_base1_int(int a)
    {
        base1_int = a;
    }
};

class base2
{
protected:
    int base2_int;

public:
    void set_base2_int(int b)
    {
        base2_int = b;
    }
};

class base3
{
protected:
    int base3_int;

public:
    void set_base3_int(int c)
    {
        base3_int = c;
    }
};

class derived:public base1,public base2,public base3{
    protected:
    int totol;
    public:
    void show(){
        cout<<"the base1_int is "<<base1_int<<endl;
        cout<<"the base2_int is "<<base2_int<<endl;
        cout<<"the base3_int is "<<base3_int<<endl;
        cout<<"the total is "<<base1_int+base2_int+base3_int<<endl;

    }
};
int main()
{
derived nishant;
nishant.set_base1_int(10);
nishant.set_base2_int(30);
nishant.set_base3_int(80);
nishant .show();
    return 0;
}