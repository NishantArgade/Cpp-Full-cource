#include<iostream>
using namespace std;

/*Properties of friend functions:

1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contans the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.
*/
//sum of two complex numbers:
// 1 + 4i
// 5 + 8i
// -------
// 6 + 12i 
class complex
{
private:
    int a;
    int b;
friend complex sumcomplex(complex o1,complex o2);
public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void printnumbers()
    {
        cout << "your complex number is " << a << " + " << b<< "i" << endl;
    }
};

complex sumcomplex(complex o1,complex o2){
    complex o3;
    o3.setdata((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
int main()
{
    complex c1, c2,sum;
    c1.setdata(2, 3);
    c1.printnumbers();

    c2.setdata(1, 4);
    c2.printnumbers();
    
    sum =sumcomplex(c1,c2);
    sum.printnumbers();
    return 0;
}