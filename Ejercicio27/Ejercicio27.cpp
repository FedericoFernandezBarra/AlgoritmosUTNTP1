#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char *argv[])
{
    int tInfr = -1, valor, cantg = 0, minval = 32767;
    double pagar = 0;
    string motivo, minmotivo;
    char gravedad;
    while (tInfr !=0)
    {
          cout << "Ingrese tipo de infraccion: ";
          cin >> tInfr;
          if(tInfr !=0)
          {
                   cout << "Ingrese el motivo: ";
                   cin >> motivo;
                   cout << "Ingrese el valor: ";
                   cin >> valor;
                   pagar = pagar + valor;
                   cout << "Ingrese tipo de gravedad (L, M, G): ";
                   cin >> gravedad;
                   if(valor < minval)
                   {
                            minval = valor; 
                            minmotivo = motivo;
                   }
                   if(tInfr == 3 || tInfr == 4)
                   {
                               if(gravedad == 'G')
                               {
                                           cantg++;
                               }
                   }
          }
    }
    cout << endl << "Total a pagar: " << pagar;
    if(cantg > 3)
    {
             cout << endl << "Clausurar Fabrica.";
    }
    cout << endl << "Motivo de la infraccion de menor valor: " << minmotivo;
    getch();
    return 0;
}
