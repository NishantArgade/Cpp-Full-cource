#include <iostream>
using namespace std;

class student
{
protected:
    int roll_no;

public:
    void set_roll_no(int R);
    void get_roll_no();
};
void student::set_roll_no(int R)
{
    roll_no = R;
}
void student::get_roll_no()
{
    cout << "the roll number of student is " << roll_no << endl;
}
class Exam : public student
{
protected:
    float math;
    float physics;

public:
    void set_mark(float m, float p);
    void get_mark();
};
void Exam::set_mark(float m, float p)
{
    math = m;
    physics = p;
}
void Exam::get_mark()
{
    cout << "the math marks is " << math << endl;
    cout << "the math physics is " << physics << endl;
}

class result : public Exam
{
public:
    void display();
};
void result::display()
{
    get_roll_no();
    get_mark();
    cout << "the parcentage of student is " << (math + physics) / 2 << " %" << endl;
}

int main()
{
    result Nishant;
    Nishant.set_roll_no(03);
    Nishant.set_mark(80.0, 92.0);
    Nishant.display();
    return 0;
}
