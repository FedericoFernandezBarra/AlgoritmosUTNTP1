#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char *argv[])
{
    int m, num, anterior = -1, cantcero=0, cantnegro=0, cantrepe=0, repe, cantalter=0, cantndocena=0;
    string color, antcolor="no";
    cout << "Ingrese la cantidad de pares: ";
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cout << endl <<"Ingrese color, numero: ";
        cin >> color >> num;
        if(num == 0)
        {
           cantcero++;
           cout << endl << "Anterior al 0: " << anterior;
        }
        if(antcolor == "negro" && color == "negro")
        {
                 cantnegro++;
        }
        if(num == anterior)
        {
               cantrepe++;
               cout << endl << "Numero que se esta repitiendo: " << anterior;
               repe = anterior;
        }
        if(color == "negro" && antcolor == "rojo")
        {
                 cantalter++;
                 cout << endl << "Veces que se esta alternando entre rojo y negro: " << cantalter;
        }
        else 
        {
             if(color == "rojo" && antcolor == "negro")
             {
                 cantalter++;
                 cout << endl << "Veces que se esta alternando entre rojo y negro: " << cantalter;
             }
             else
             {
                 cantalter=0;
             }
        }
        if(num < 12 && num > 23)
        {
               cantndocena++;
               cout << endl << "Veces que se esta negando la segunda docena: " << cantndocena;
        }
        else
        {
               cantndocena = 0;
        }
        anterior = num;
        antcolor = color;
    }
    cout << endl << "Veces que se repitio el color negro: " << cantnegro;
    cout << endl << "Numero que se repitio: " << repe;
    cout << endl << "Veces que se repitio: " << cantrepe;
    cout << endl << "Veces que se nego la segunda docena: " << cantndocena;
    getch();
    return 0;
}
