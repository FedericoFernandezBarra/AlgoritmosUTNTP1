#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char *argv[])
{
    int mes, anio;
    cout << "Ingrese mes y anio: ";
    cin >> mes >> anio;
    switch(mes)
    {
      case 1:
         cout << "Enero: 31 dias";
         break;
      case 2: 
         if((anio%4==0) && ((anio%100!=0)||(anio%400==0)))
         {
             cout << "Febrero (bisiesto): 29 dias";
         }
         else
         {
             cout << "Febrero: 28 dias"; 
         }
         break;
      case 3:
         cout << "Marzo: 31 dias";
         break;
      case 4:
         cout << "Abril: 30 dias";
         break;
      case 5:
         cout << "Mayo: 31 dias";
         break;
      case 6:
         cout << "Junio: 30 dias";
         break;
      case 7:
         cout << "Julio: 31 dias";
         break;
      case 8:
         cout << "Agosto: 31 dias";
         break;
      case 9:
         cout << "Septiembre: 30 dias";
         break;
      case 10: 
         cout << "Octubre: 31 dias";
         break;
      case 11: 
         cout << "Noviembre: 30 dias";
         break;
      case 12:
         cout << "Diciembre: 31 dias";
         break;
    }
    getch();
    return 0;
}
