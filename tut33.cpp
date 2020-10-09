#include <iostream>
using namespace std;

class bankdeposit
{
    int principle;
    int year;
    float interestrate;
    float returnamount;

public:
    bankdeposit(){};
    bankdeposit(int p, int y, int r);
    bankdeposit(int p, int y, float r);
    void show();
};
bankdeposit::bankdeposit(int p, int y, float r)
{
    principle = p;
    year = y;
    interestrate = r;
    returnamount = principle;
    for (int i = 0; i < y; i++)
    {
        returnamount = principle * (1 + interestrate);
    }
}
bankdeposit::bankdeposit(int p, int y, int R)
{
    principle = p;
    year = y;
    interestrate = float(R);
    returnamount = principle;
    for (int i = 0; i < y; i++)
    {
        returnamount = principle * (1 + interestrate / 100);
    }
}
void bankdeposit::show()
{
    cout << "the return amount is " << returnamount << endl;
}

int main()
{
    bankdeposit o1,o2;
    int p, y;
    float r, returnamount;
    int R;
    cout << "enter the int rate  values" << endl;
    cin >> p >> y >> R;
    o2 = bankdeposit(p, y, R);
    o2.show();
    cout << "enter the float reat values" << endl;
    cin >> p >> y >> r;
    o1 = bankdeposit(p, y, r);
    o1.show();

    return 0;
}