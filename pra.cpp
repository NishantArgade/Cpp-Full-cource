#include <iostream>
#include <string>

using namespace std;

class binary
{
private:
    string s;
    void chk_bin(void);

public:
    void read(void);
    void ones_complement(void);
    void display(void);
};

void binary::read(void)
{
    cout << "enter the binary number " << endl;
    cin >> s;
}

void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) !='0' && s.at(i) != '1')
        {
            cout << "not binary formate" << endl;
            exit(0);
        }
    }
}

void binary::ones_complement(void)
{            chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) ='1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary ::display(void)
{
    cout << "the binary number is :" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{

    binary d;

    d.read();
    // d.chk_bin();
    d.ones_complement();
    d.display();
    return 0;
}