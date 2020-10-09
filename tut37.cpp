#include <iostream>
using namespace std;

class employee
{
public:
    int id;
    int salary;
    employee(int val)
    {
        id = val;
        salary = 12000;
    }
    employee() {}
};
class programmer : public employee
{
public:
    int langcode;
    programmer(int val2)
    {
        id = val2;
        langcode = 34;
    }
    void getdata()
    {
        cout << "the the value of id is "<<id << endl;
    }
};

int main()
{
    employee o1(1), o2(2);
    cout << o1.salary<<endl;
    cout << o2.salary<<endl;
    
    programmer coder(25);
    cout<<coder.id<<endl;
    cout<<coder.langcode<<endl;
    coder.getdata();
    return 0;
}
