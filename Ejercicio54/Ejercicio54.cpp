#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

long toMin(long t)
{
     int minutos, horas;
     horas = t/100;
     minutos =  t - (horas*100);
     return horas * 60 + minutos;
}

void abono(int costo, int minslibres, float cargo, int minshablados, int& minsexcedidos, float& montoapagar)
{
     if((minslibres - minshablados) < 0)
     {
           minsexcedidos = minshablados - minslibres;
           montoapagar = costo + (cargo * minsexcedidos);
           montoapagar = montoapagar * 0.21 + montoapagar;
     }
     else
     {
         minsexcedidos = 0;
         montoapagar = costo;
         montoapagar = montoapagar * 0.21 + montoapagar;
     }
}

void tipoPlan(char tipo, int& costo, int& minslibres, float& cargo)
{
     if(tipo == 'A' || tipo == 'a')
     {
             costo = 70;
             minslibres = 300;
             cargo = 0.09;
     }
     if(tipo == 'B' || tipo == 'b')
     {
             costo = 55;
             minslibres = 200;
             cargo = 0.15;
     }
     if(tipo == 'C' || tipo == 'c')
     {
             costo = 40;
             minslibres = 100;
             cargo = 0.21;
     }
     if(tipo == 'D' || tipo == 'd')
     {
             costo = 28;
             minslibres = 60;
             cargo = 0.29;
     }
     if(tipo == 'E' || tipo == 'e')
     {
             costo = 19;
             minslibres = 40;
             cargo = 0.37;
     }
}

int main(int argc, char *argv[])
{
    int numcel = 1, minsextra, costo, minslibres;
    long tiempo;
    string nombre, direccion;
    float apagar, cargo;
    char tipoabono;
    for(int i = 1; i <= 3; i++)
    {
            if(i == 1)
            {
                 cout << "Turno M" << endl;
                 while(numcel != 0)
                 {
                              cout << endl << "Ingrese numero de celular (0 para terminar): ";
                              cin >> numcel;
                              if(numcel != 0)
                              {
                                        cout << endl << "Ingrese el nombre del Abonado: ";
                                        cin >> nombre;
                                        cout << "Ingrese la direccion del Abonado: ";
                                        cin >> direccion;
                                        cout << "Ingrese el tiempo utilizado (formato hhmm): ";
                                        cin >> tiempo;
                                        cout << "Ingrese tipo de Abono (A,B,C,D,E): ";
                                        cin >> tipoabono;
                                        tipoPlan(tipoabono, costo, minslibres, cargo);
                                        abono(costo, minslibres, cargo, toMin(tiempo), minsextra, apagar);
                                        cout << "Nombre: " << nombre << "  Direccion: " << direccion << "  Minutos libres: " << minslibres << "  Minutos excedidos: " << minsextra << "  Total a pagar: " << apagar;     
                              }
                 }
                 numcel = 1;
            }
            if(i == 2)
            {
                 cout << endl << "Turno T" << endl;
                 while(numcel != 0)
                 {
                              cout << endl << "Ingrese numero de celular (0 para terminar): ";
                              cin >> numcel;
                              if(numcel != 0)
                              {
                                        cout << endl << "Ingrese el nombre del Abonado: ";
                                        cin >> nombre;
                                        cout << "Ingrese la direccion del Abonado: ";
                                        cin >> direccion;
                                        cout << "Ingrese el tiempo utilizado (formato hhmm): ";
                                        cin >> tiempo;
                                        cout << "Ingrese tipo de Abono (A,B,C,D,E): ";
                                        cin >> tipoabono;
                                        tipoPlan(tipoabono, costo, minslibres, cargo);
                                        abono(costo, minslibres, cargo, toMin(tiempo), minsextra, apagar);
                                        cout << "Nombre: " << nombre << "  Direccion: " << direccion << "  Minutos libres: " << minslibres << "  Minutos excedidos: " << minsextra << "  Total a pagar: " << apagar;
                                        
                              }
                 }
                 numcel = 1;
            }            
            if(i == 3)
            {
                 cout << endl << "Turno N" << endl;
                 while(numcel != 0)
                 {
                              cout << endl << "Ingrese numero de celular (0 para terminar): ";
                              cin >> numcel;
                              if(numcel != 0)
                              {
                                        cout << endl << "Ingrese el nombre del Abonado: ";
                                        cin >> nombre;
                                        cout << "Ingrese la direccion del Abonado: ";
                                        cin >> direccion;
                                        cout << "Ingrese el tiempo utilizado (formato hhmm): ";
                                        cin >> tiempo;
                                        cout << "Ingrese tipo de Abono (A,B,C,D,E): ";
                                        cin >> tipoabono;
                                        tipoPlan(tipoabono, costo, minslibres, cargo);
                                        abono(costo, minslibres, cargo, toMin(tiempo), minsextra, apagar);
                                        cout << "Nombre: " << nombre << "  Direccion: " << direccion << "  Minutos libres: " << minslibres << "  Minutos excedidos: " << minsextra << "  Total a pagar: " << apagar;                                      
                              }
                 }
                 numcel = 1;
            }
    }
    getch();
    return 0;
}
