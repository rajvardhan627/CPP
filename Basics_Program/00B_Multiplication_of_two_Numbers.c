#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;

class Calc
{
public:
    int N1, N2, Mul;

    void Set_Values()
    {
        cout << "\n Enter two Numbers To Check Multiplication of Numbers = ";
        cin >> N1 >> N2;
    }

    void Multiplication()
    {
        cout << "\n Inside Multiplication" << endl;
        Mul = N1 * N2;
    }
};

int main()
{
    Calc Obj1;

    Obj1.Set_Values();

    cout << "\n Back To Main()" << endl;

    Obj1.Multiplication();

    cout << "\n Back in Main()" << endl;

    cout << "\n Multiplication of " << Obj1.N1
         << " And " << Obj1.N2
         << " is = " << Obj1.Mul;

    getch();
    return 0;
}
