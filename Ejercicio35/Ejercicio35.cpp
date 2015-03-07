#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char *argv[])
{
    string domicilio, nombre, apellido, domiciliomasinteg;
    char sexo, estudios, vivienda;
    int edad = 0;
    int cantintegrantes = 1;
    int cantprimario = 0;
    int cantanalfab = 0;
    int cantencuestados = 0;
    int masintegr = 0;
    int edadf = 0;
    int edadc = 0;
    float cantmasc = 0;
    float cantfem = 0;
    while (cantintegrantes != 0)
    {
      cout << endl << "Ingrese Domicilio: ";
      cin >> domicilio;
      cout << endl << "Ingrese tipo de vivienda (C: casa, D: departamento): ";
      cin >> vivienda;
      cout << endl << "Ingrese la cantidad de integrantes (0 para terminar): ";
      cin >> cantintegrantes;
      if(cantintegrantes !=0)
      {
       if(vivienda == 'D')
       {
          if(cantintegrantes > masintegr)
          {
             masintegr = cantintegrantes;
             domiciliomasinteg = domicilio;
          }
       }
       for (int i = 0; i < cantintegrantes; i++)
       {
          cout << endl << endl << "Ingrese Nombre: ";
          cin >> nombre;
          cout << endl << "Ingrese Apellido: ";
          cin >> apellido;
          cout << endl << "Ingrese Edad: ";
          cin >> edad;
          edadf = edadf + edad;
          edadc = edadc + edad;
          cout << endl << "Ingrese Sexo (M | F): ";
          cin >> sexo;
          if(sexo == 'M' || sexo == 'm')
          {
              cantmasc++;
          }
          else
          {
              cantfem++;
          }
          cout << endl << "Ingrese Nivel de estudios (N | P | S | T | U): ";
          cin >> estudios;
          if(estudios != 'n' || estudios != 'N')
          {
              cantprimario++;        
          }
          if(edad > 10 && (estudios == 'N' || estudios == 'n'))
          {
                  cantanalfab++;
          }
          cantencuestados++;
        }
        cout << "Promedio de edad de la familia: " << edadf/cantintegrantes;
        edadf=0;
      }
    }
    cout << endl << "Cantidad de encuestados con estudios primarios completos: " << cantprimario;
    cout << endl << "Porcentaje de analfabetismo: " << (cantanalfab*100)/cantencuestados << "%";
    cout << endl << "Domicilio de la familia con mas integrantes en departamento: " << domiciliomasinteg;
    cout << endl << "Promedio de edad de la ciudad: " << edadc/cantencuestados;
    cout << endl << "Promedio de Hombres: " << cantmasc/cantencuestados;
    cout << endl << "Promedio de Mujeres: " << cantfem/cantencuestados;
    getch();
    return 0;
}
