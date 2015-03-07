#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char** argv)
{
    int fechaA, fecha1, fecha2, diaA, dia1, dia2, mesA, mes1, mes2, anioA, anio1, anio2;
   
    cout << "Ingrese la fecha actual (formato aaaammdd): ";
    cin >> fechaA;
    anioA = fechaA / 10000;
    mesA = (fechaA - anioA * 10000) / 100;
    diaA = (fechaA - anioA * 10000 - mesA * 100);

    cout << "Ingrese dos fechas distintas (formato aaaammdd): ";
    cin >> fecha1 >> fecha2;

    anio1 = fecha1 / 10000;
    mes1 = (fecha1 - anio1 * 10000) / 100;
    dia1 = (fecha1 - anio1 * 10000 - mes1 * 100);

    anio2 = fecha2 / 10000;
    mes2 = (fecha2 - anio2 * 10000) / 100;
    dia2 = (fecha2 - anio2 * 10000 - mes2 * 100);

    if (abs(anioA - anio1) < abs(anioA - anio2))
    {
        cout << "Primer fecha ingresada mas cercana a la actual: " << fecha1;
    } 
    else
    {
        if (abs(anioA - anio2) < abs(anioA - anio1))
        {
            cout << "Segunda fecha ingresada mas cercana a la actual: " << fecha2;
        } 
        else
        {
            if (abs(mesA - mes1) < abs(mesA - mes2))
            {
                cout << "Primera fecha ingresada mas cercana a la actual: " << fecha1;
            } 
            else
            {
                if (abs(mesA - mes2) < abs(mesA - mes1))
                {
                    cout << "Segunda fecha ingresada mas cercana a la actual: " << fecha2;
                } 
                else
                {
                    if (abs(diaA - dia1) > abs(diaA - dia2))
                    {
                        cout << "Primera fecha ingresada mas cercana a la actual: " << fecha1;
                    } 
                    else
                    {
                        if (abs(diaA - dia2) > abs(diaA - dia1))
                        {
                            cout << "Segunda fecha ingresada mas cercana a la actual: " << fecha2;
                        }
                        else
                        {
                            cout << "Las dos fechas tienen la misma distancia a la actual.";
                        }
                    }
                }
            }
        }
    }
    getch();
    return 0;
}

