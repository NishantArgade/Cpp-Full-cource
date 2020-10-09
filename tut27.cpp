#include <iostream>
using namespace std;

class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumrealcomplex(complex, complex);
    int sumcomcomplex(complex, complex);
};
class complex
{
    int a, b;
    friend class calculator;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void print()
    {
        cout << "the complex no is :" << a << " + " << b << "i" << endl;
    }
};
int calculator::sumrealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int calculator::sumcomcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex c1, c2;
    c1.setdata(2, 7);
    c1.print();

    c2.setdata(3, 1);
    c2.print();

    calculator calc;
    int real = calc.sumrealcomplex(c1, c2);
    cout << "the sum of real complex is " << real << endl;
    int comp = calc.sumcomcomplex(c1, c2);
    cout << "the sum of comp complex is " << comp << endl;
    int sum=calc.add(12,20);
    cout << "the sum of  is " << sum << endl;
    return 0;
}