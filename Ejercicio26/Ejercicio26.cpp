#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char *argv[])
{
    int idCont = 1, peso, contpeso, pesomax=0, idPuerto, p1=0, p2=0, p3=0;
    double totpeso = 0;
    while (idCont <= 100)
    {
          cout << endl << "Contenedor actual: " << idCont;
          cout << endl << "Ingrese peso del contenedor: ";
          cin >> peso;
          totpeso = totpeso+peso;
          if(peso > pesomax)
          {
                  pesomax = peso;
                  contpeso = idCont;
          }
          cout << "Puerto al que se destina: ";
          cin >> idPuerto;
          if (idPuerto == 1)
          {
              p1++;
          }
          else
          {
              if (idPuerto == 2)
              {
                  p2++;
              }
              else
              {
                  p3++;
              }
          }
          idCont++;
    }
    cout << endl << "Peso total a cargar: " << totpeso;
    cout << endl << "El contenedor de mayor peso: " << contpeso << " Pesa: " << pesomax;
    cout << endl << "Cantidad de contenedores a puerto1: " << p1;
    cout << endl << "Cantidad de contenedores a puerto2: " << p2;
    cout << endl << "Cantidad de contenedores a puerto3: " << p3;
    getch();
    return 0;
}
