#include <iostream>
using namespace std;

class simple
{
    int a;
    int b;
    int c;

public:
    simple(int x, int y=23 , int z=65 )//constructor never can declare.
    {
        a = x;
        b = y;
        c = z;
    }
  
     void display();
};
    void simple::display()
    {
        cout << "the the value of a ,b and c is " << a <<","<< b <<" and "<< c << endl;
    }
int main()
{
    simple o1(0);
    o1.display();

    simple o2(56, 45);
    o2.display();

    simple o3(76, 68, 35);
    o3.display();
    return 0;
}