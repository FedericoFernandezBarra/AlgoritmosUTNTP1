#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char *argv[])
{
    string nombre, vnombre, jnombre;
    int fecha, dia, mes, anio, vdia, vmes, vanio, jdia, jmes, janio;
    cout << "Ingrese el nombre: ";
    cin >> nombre;
    cout << "Ingrese la fecha de nacimiento (ddmmaaaa): ";
    cin >> fecha;
    dia = fecha/1000000;
    mes = (fecha - dia*1000000)/10000;
    anio= (fecha - dia * 1000000 - mes * 10000);
    vdia = dia;
    vmes = mes;
    vanio = anio;
    jdia = dia;
    jmes = mes;
    janio = anio;
    vnombre = nombre;
    jnombre = nombre;
    while (nombre != "fin")
    {
     cout << "Ingrese el nombre: ";
     cin >> nombre;
     if (nombre != "fin")
     {
     cout << "Ingrese la fecha de nacimiento (ddmmaaaa): ";
     cin >> fecha;
     dia = fecha/1000000;
     mes = (fecha - dia*1000000)/10000;
     anio= (fecha - dia * 1000000 - mes * 10000);
     if (anio < vanio)
     {
              vanio = anio;
              vmes = mes;
              vdia = dia;
              vnombre = nombre;
     }
     else
     {
         if(anio == vanio)
         {
                 if(mes < vmes)
                 {
                        vmes = mes;
                        vdia = dia;
                        vnombre = nombre; 
                 }
                 else
                 {
                     if(mes == vmes)
                     {
                            if(dia < vdia)
                            {
                                    vdia = dia;
                                    vnombre = nombre; 
                            }       
                     }
                 }
         }
     }
     if (anio > janio)
     {
              janio = anio;
              jmes = mes;
              jdia = dia;
              jnombre = nombre;
     } 
     else
     {
         if(anio == janio)
         {
                 if(mes > jmes)
                 {
                        jmes = mes;
                        jdia = dia;
                        jnombre = nombre; 
                 }
                 else
                 {
                     if(mes == jmes)
                     {
                            if(dia > jdia)
                            {
                                    jdia = dia;
                                    jnombre = nombre; 
                            }       
                     }
                 }
         }
     }
     }
    }
    cout << "La persona de mayor edad es: " << vnombre << endl;
    cout << "La persona de menor edad es: " << jnombre;
    getch();
    return 0;
}



