#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;

class Calc
{
public:
    int N1, N2, Sub;

    void Set_Values()
    {
        cout << "\n Enter two Numbers To Check Substraction of Numbers = ";
        cin >> N1 >> N2;
    }

    void Substraction()
    {
        cout << "\n Inside Sub" << endl;
        Sub = N1 - N2;
    }
};

int main()
{
    Calc Obj1, Obj2, Obj3;

    Obj1.Set_Values();

    cout << "\n Back To Main()" << endl;

    Obj1.Substraction();

    cout << "\n Back in Main()" << endl;

    cout << "\n Substraction of " << Obj1.N1
         << " And " << Obj1.N2
         << " is = " << Obj1.Sub;

    getch();
    return 0;
}
