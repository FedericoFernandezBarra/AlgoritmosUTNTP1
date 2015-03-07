#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char** argv)
{
    int num, mayor=-32768, cont = 1;
    while (cont <=  10)
    {
        cout << cont << ")Ingrese un numero: ";
        cin >> num;
        if (num > mayor)
        {
            mayor = num;
        }
        cont ++;
    }
    cout << endl << "El mayor numero es: " << mayor; 
    getch();
    return 0;
}

