#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char *argv[])
{
    char letra='a';
    int canta=0, cante=0, canti=0, canto=0, cantu=0, cantpal=0, contletra=0, cantlarga=0;
    while (letra != '.')
    {
          cout << "Ingrese un caracter (- para espacios): ";
          cin >> letra;
          if (letra == 'a')
          {
             canta++;       
          }
          if (letra == 'e')
          {
             cante++;       
          }
          if (letra == 'i')
          {
             canti++;       
          }
          if (letra == 'o')
          {
             canto++;       
          }
          if (letra == 'u')
          {
             cantu++;       
          }
          if (letra == '-' || letra == '.')
          {
              cantpal++;
              contletra =0;
          }
          else
          {
              contletra++;
          }
          if(contletra > cantlarga)
          {
              cantlarga=contletra;            
          }
    }
    cout << endl << "A: " << canta << " E: " << cante << " I: " << canti << " O: " << canto << " U: " << cantu;
    cout << endl << "Cantidad de palabras: " << cantpal;
    cout << endl << "Cantidad de letras de la palabra mas larga: " << cantlarga;
    getch();
    return 0;
}
