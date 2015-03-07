#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char *argv[])
{
    int dia = 1, mes, anio, octubre=0, antejulio=0, primavera=0, vdia, vmes, vanio = 32767;
    char sexo, vsexo;
    while(dia !=0)
    {
              cout << "Ingrese dia: ";
              cin >> dia;
              if(dia !=0)
              {
                     cout << "Ingrese mes: ";
                     cin >> mes;
                     cout << "Ingrese anio: ";
                     cin >> anio;
                     cout << "Ingrese sexo: ";
                     cin >> sexo;
                     if(mes == 10)
                     {
                            octubre++;
                     }
                     if(anio < 1990)
                     {
                             antejulio++;
                     }
                     else
                     {
                         if(anio == 1990)
                         {
                                   if(mes < 7)
                                   {
                                        antejulio++;     
                                   }
                                   else
                                   {
                                       if(mes == 7)
                                       {
                                            if(dia < 9)
                                            {
                                                antejulio++;   
                                            }      
                                       }
                                   }
                         }
                     }
                     if(sexo == 'f' || sexo == 'F')
                     {
                             if(anio == 1982)
                             {
                                     if(mes == 9)
                                     {
                                            if(dia >= 21)
                                            {
                                                   primavera++;
                                            }
                                     }
                                     if(mes > 9 && mes < 12)
                                     {
                                            primavera++;
                                     }
                                     if(mes == 12)
                                     {
                                            if(dia < 21)
                                            {
                                                  primavera++; 
                                            }
                                     }
                             }
                     }
                     if(anio < vanio)
                     {
                             vanio = anio;
                             vmes = mes;
                             vdia = dia;
                             vsexo = sexo;
                     }
                     else
                     {
                         if(anio == vanio)
                         {
                                   if(mes < vmes)
                                   { 
                                        vmes = mes;
                                        vdia = dia;
                                        vsexo = sexo;     
                                   }
                                   else
                                   {
                                       if(mes == vmes)
                                       {
                                            if(dia < vdia)
                                            {
                                                vdia = dia;
                                                vsexo = sexo;  
                                            }      
                                       }
                                   }
                         }
                     }
              }
    }
    cout << endl << "Cantidad de nacimientos en el mes de octubre de todos los anios: " << octubre;
    cout << endl << "Cantidad de nacimientos antes del 9 de julio de 1990: " << antejulio;
    cout << endl << "Cantidad de nacimientos de mujeres en la primavera de 1982: " << primavera;
    cout << endl << "Sexo de la persona mas vieja: " << vsexo;   
    getch();
    return 0;
}
