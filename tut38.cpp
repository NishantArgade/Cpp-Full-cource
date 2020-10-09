#include <iostream>
using namespace std;

class base
{
    int val1;

public:
    int val2;
    void setdata();
    int getval1();
    int getval2();
};
void base::setdata()
{
    val1 = 10;
    val2 = 20;
}
int base::getval1()
{
    return val1;
}
int base::getval2()
{
    return val2;
}
class derive : public base
{
    int val3 ;
    public : 
    int val4;
    void process()
    {
        val3 = val2 * getval1();
    }
    void display()
    {
        cout << "the the value of val1 is " << getval1() << endl;
        cout << "the the value of val2 is " << val2 << endl;
        cout << "the the value of val3 is " << val3 << endl;
    }
};
int main()
{
    derive o1;
    o1.setdata();
    o1.process();
    o1.display();
    return 0;
}