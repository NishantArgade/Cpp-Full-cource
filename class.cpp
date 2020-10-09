#include <iostream>
using namespace std;

class complex
{
private:
    int a,b,c,d,e,f,g,h;

public:
   
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    complex(complex obj1, complex obj2)
    {
        a = obj1.a + obj2.a;
        b = obj1.b + obj2.b;
        c = obj1.a - obj2.a;
        d = obj1.b - obj2.b;
        e = obj1.a * obj2.a;
        f = obj1.b * obj2.b;
        g = obj1.a / obj2.a;
        h = obj1.b / obj2.b;
     
    }
    void given_complex(){
        cout<<"your complex no is " <<a<<"+"<<b<<"i"<<endl;
    }

    void show_complex()
    {cout<<endl;
        cout << "the addition complex no  is " << a << "+" << b << "i" << endl;
        cout << "the substraction complex no is " << c << "-" << d << "i" << endl;
        cout << "the multiplication complex no  is " << e << "*" << f << "i" << endl;
        cout << "the divition complex no  is " << g << "/" << h << "i" << endl;
        
    }
};

int main()
{
    complex object1(10, 20);
    object1.given_complex();

    complex object2(5, 5);
    object2.given_complex();

    complex object3(object1,object2);
    object3.show_complex();

    return 0;
}