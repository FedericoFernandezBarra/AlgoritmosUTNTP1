#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

void reducir(int numerador,int denominador)
{
	if(numerador == 1)
    {
		cout << numerador<< "/" << denominador;
	}
    else
    {
        int b=2;
     	while(b <= numerador)
        {
             if(denominador%b == 0 && numerador%b == 0)
             {
		      	denominador = denominador/b;
		        numerador = numerador/b;
		     }
             else
             {
                b++;
             }
	    }
	    cout << numerador << "/" << denominador;
	}
}

int main(int argc, char *argv[])
{
    int num, den;
    cout << "Ingrese el numerador: ";
    cin >> num;
    cout << "\nIngrese el denominador: ";
    cin >> den;
	reducir(num, den);
	getch();
	return 0;
}
