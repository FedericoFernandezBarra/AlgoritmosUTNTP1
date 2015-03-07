#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char** argv)
{
    int a, b;
    cout << "Ingrese dos valores: ";
    cin >> a >> b;
    if(a>b)
    {
        cout << "El mayor es: " << a << endl;
        cout << "El menor es: " << b;
    }
    else
    {
        if(b>a)
        {
            cout << "El mayor es: " << b << endl;
            cout << "El menor es: " << a;
        }
        else
        {
            cout << "Los dos valores ingresados son iguales (" << a << ")";
        }
    }
    getch();
    return 0;
}

