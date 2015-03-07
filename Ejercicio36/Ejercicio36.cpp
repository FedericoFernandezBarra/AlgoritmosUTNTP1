#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char *argv[])
{
    string destino;
    int m, cantasientos, cantocupado = 0, cantvueloscomp = 0, vuelos = 0, numvuelo, numvuelorec, numpasaporte = 1, importe;
    double recaudo = 0, totrecaudo = 0, maxrec = 0;
    cout << "Ingrese la cantidad de vuelos: ";
    cin >> m;
    while(vuelos < m)
    {
                 cout << "Ingrese el numero del vuelo: ";
                 cin >> numvuelo;
                 cout << "Ingrese el destino: ";
                 cin >> destino;
                 cout << "Ingrese la cantidad de asientos: ";
                 cin >> cantasientos;
                 while (cantocupado < cantasientos && numpasaporte != 0)
                 {
                       cout << "Ingrese el numero de pasaporte: ";
                       cin >> numpasaporte;
                       if(numpasaporte != 0)
                       {
                               cout << "Ingrese el importe: ";
                               cin >> importe;
                               recaudo = recaudo + importe;
                               cantocupado++;      
                       }
                 }
                 if(cantocupado == cantasientos)
                 {
                       cantvueloscomp++;           
                 }
                 cout << "Total recaudado del vuelo: " << recaudo << endl;
                 if (recaudo > maxrec)
                 {
                             maxrec = recaudo;
                             numvuelorec = numvuelo;
                 }
                 int porcentaje = (cantocupado*100)/cantasientos;
                 cout << "Porcentaje de Asientos Ocupados: " << porcentaje << "%" << endl;
                 cout << "Porcentaje de Asientos Libres: " << 100-porcentaje << "%" << endl;
                 totrecaudo = totrecaudo + recaudo;
                 cantocupado = 0;
                 numpasaporte = 1;
                 recaudo = 0;
                 vuelos++;
    }
    cout << endl <<"Total recaudado: " << totrecaudo;
    cout << endl << "Cantidad de vuelos completos: " << cantvueloscomp;
    cout << endl << "Vuelo que mas recaudo: " << numvuelorec;
    getch();
    return 0;
}
