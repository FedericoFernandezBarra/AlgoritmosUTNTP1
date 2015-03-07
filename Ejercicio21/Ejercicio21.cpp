#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char** argv)
{
    int num, mayor, menor, cont = 1, posmin, posmax;
    cout << "1) Ingrese un numero: ";
    cin >> num;
    mayor = num;
    menor = num;
    posmin = cont;
    posmax = cont;
    cont++;

    while (num != 0) 
    {
        cout << cont << ") Ingrese un numero (0 para terminar): ";
        cin >> num;
        if (num > mayor && num != 0) 
        {
            mayor = num;
            posmax = cont;
        }
        if (num < menor && num != 0) 
        {
            menor = num;
            posmin = cont;
        }
        
        cont++;
    }
    cout << endl << "El mayor numero es: " << mayor << " posicion: " << posmax;
    cout << endl << "El menor numero es: " << menor << " posicion: " << posmin;
    getch();
    return 0;
}

