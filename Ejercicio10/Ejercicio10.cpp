#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char** argv)
{
    int lado1, lado2, lado3;
    cout << "Ingrese 3 lados de un triangulo: ";
    cin >> lado1 >> lado2 >> lado3;
    if(lado1 == lado2 && lado1 == lado3)
    {
        cout << "Es un triangulo equilatero.";
    }
    else
    {
        if(lado1==lado2 && lado2!=lado3 || lado2==lado3 && lado3!=lado1 || lado3==lado1 && lado1!=lado2)
        {
            cout << "Es un triangulo isosceles";
        }
        else
        {
            cout << "Es un triangulo escaleno";
        }
    }
    getch();
    return 0;
}

