#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;

class Calc
{
    public:
    int N1 ,N2 ,Div;

    void set_value()
    {
        cout << "\n Enter two Numbers To Check Substraction of Numbers = ";
        cin >> N1 >> N2;
    }
     void Division()
    {
        cout << "\n Inside Div" << endl;
        Div = N1 / N2;
    }

};
int main()
{
    Calc obj1, obj2 , obj3;
    obj1.set_value();
    cout << "\n Back To Main()" << endl;

    obj1.Division();
    cout << "\n Back in Main()" << endl;

    cout << "\n Division of " << Obj1.N1
         << " And " << Obj1.N2
         << " is = " << Obj1.Div;


}


