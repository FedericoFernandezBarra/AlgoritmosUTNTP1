#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char *argv[])
{
    int k, codEq;
    char res;
    cout << "Ingrese cantidad de equipos: ";
    cin >> k;
    for (int i = 1; i <= k; i++)
    {
        int puntos = 0;
        cout << "Partidos del equipo " << i << endl;;
        for (int j = 1; j <= k-1; j++)
        {
         cout << "Ingrese el codigo del equipo rival: ";
         cin >> codEq;
         cout << "Ingrese el resultado del partido " << i << " vs " << codEq << " (G, E, P): ";
         cin >> res;
         if(res == 'G' || res == 'g')
         {
            puntos = puntos + 3;
         }
         else
         {
            if(res == 'E' || res == 'e')
            {
                   puntos = puntos +1;
            }
         }
        }
        cout << "Puntaje del equipo " << i << ": " << puntos << endl;
    }    
    getch();
    return 0;
}
