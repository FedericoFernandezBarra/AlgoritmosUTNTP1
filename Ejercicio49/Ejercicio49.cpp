#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char *argv[])
{
    int num, cien=0, cincuenta=0, veinte=0, diez=0, cinco=0, dos=0, uno=0;
    cout << "Ingrese un numero: ";
    cin >> num;
    while (num >= 100)
    {
     if (num - 100 >= 0)
     {
      cien++;
      num = num - 100;
     }    
    }
    while (num >= 50)
    {
     if (num - 50 >= 0)
     {
      cincuenta++;
      num = num - 50;
     }    
    }
    while (num >= 20)
    {
     if (num - 20 >= 0)
     {
      veinte++;
      num = num - 20;
     }    
    }
    while (num >= 10)
    {
     if (num - 10 >= 0)
     {
      diez++;
      num = num - 10;
     }    
    }
    while (num >= 5)
    {
     if (num - 5 >= 0)
     {
      cinco++;
      num = num - 5;
     }    
    }
    while (num >= 2)
    {
     if (num - 2 >= 0)
     {
      dos++;
      num = num - 2;
     }    
    }
    while (num >= 1)
    {
     if (num - 1 >= 0)
     {
      uno++;
      num = num - 1;
     }    
    }
    if(cien > 0)
    {
     cout << cien << " billetes de $100  ";        
    }
    if(cincuenta > 0)
    {
     cout << cincuenta << " billetes de $50  ";         
    }
    if(veinte > 0)
    {
     cout << veinte << " billetes de $20  ";                
    }
    if(diez > 0)
    {
     cout << diez << " billetes de $10  ";                  
    }
    if(cinco > 0)
    {
     cout << cinco << " billetes de $5  ";                  
    }
    if(dos > 0)
    {
     cout << dos << " billetes de $2  ";                  
    }
    if(uno > 0)
    {
     cout << uno << " billetes de $1  ";                  
    }          
    getch();
    return 0;
}
