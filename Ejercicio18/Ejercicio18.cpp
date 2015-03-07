#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char *argv[])
{
    int cant2k = 0, cant3k = 0, cant5k = 0, cantm5k = 0, sueldo = 1;
    do{
        cout << "Ingrese sueldo del empleado (0 para terminar): ";
        cin >> sueldo;
        if (sueldo < 2000)
        {
                   cant2k ++;
        }
        else
        {
            if (sueldo >= 2000 && sueldo < 3000)
            {
                       cant3k++;
            }
            else
            {
                if (sueldo >= 3000 && sueldo < 5000)
                {
                           cant5k++;
                }
                else
                {
                    cantm5k++;
                }
            }
          }    
        }
    while(sueldo != 0);
    cout << "Cantidad de empleados con sueldo menor a $2000: " << cant2k << endl;
    cout << "Cantidad de empleados con sueldo mayor a $2000 y menor a $3000: " << cant3k << endl;
    cout << "Cantidad de empleados con sueldo mayor a $3000 y menor a $5000: " << cant5k << endl;
    cout << "Cantidad de empleados con sueldo mayor a $5000: " << cantm5k << endl;
    getch();
    return 0;
}
