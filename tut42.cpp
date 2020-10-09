#include <iostream>
#include<cmath>// add this header file for scientific calculation//
using namespace std;

/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and perfoms +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and perfoms any four scientific operation of your chioice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using? -------> multiple inheritance is used
    Q2. Which mode of Inheritance are you using?-------> public inhritance mobe
    Q3. Create an object of HybridCalculator and display results of simple and scientific calculator.--->done
    Q4. How is code reusability implemented?---->no need to write too much longer code.
*/

class simple_calc
{
protected:
    int num1;
    int num2;

public:
    void get_simple_data(){
        cout<<"Enter num1 and num2 :"<<endl;
        cin>>num1;
        cin>>num2;

    }
};
class scientific_calc
{
protected:
    int num3;
    int num4;

public:
 void get_scientic_data(){
        cout<<"Enter num3 and num4 :"<<endl;
        cin>>num3;
        cin>>num4;

    }
    
};

class Hybrid_calc : public simple_calc, public scientific_calc
{

public:
    void show_simple_cal(void)
    {
        cout << "here is the calculation with the help of simple calculator : "<<endl;

             
        cout<< "the sum of two number is " << num1 + num2 << endl;
        cout << "the substraction of two number is " << num1 - num2 << endl;
        cout << "the multiplication of two number is " << num1 * num2 << endl;
        cout << "the division of two number is " << num1 / num2 << endl;   }

      void show_scientific_cal(void) { cout << "here is the calculation with the help of scientific calculator : "<<endl;

            
        cout<< "the sum of sin(num3)+sin(num4) two number is " << sin(num3)+sin(num4) << endl;
        cout << "the sum  of sin(num3)+cos(num4) two number is " << sin(num3)+cos(num4)  << endl;
        cout << "the sum  of sin(num3)+cos(num4) two number is " <<  sin(num3)+cos(num4)  << endl;
        cout << "the sum  of sin(num3)+cos(num4) two number is " <<sin(num3)+cos(num4)   << endl;
    }
};

int main()
{
    Hybrid_calc number;

    number.get_simple_data();
    number.show_simple_cal();

    number.get_scientic_data();
    number.show_scientific_cal();


    return 0;
}