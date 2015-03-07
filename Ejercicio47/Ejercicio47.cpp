#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

void sumarHora(long h, long t, long& res)
{
    int hs, mins, segs, ths, tmins, tsegs;
    hs = h/10000;
    mins = (h-hs*10000)/100;
    segs = (h-hs*10000-mins*100);
    ths = t/10000;
    tmins = (t-ths*10000)/100;
    tsegs = (t-ths*10000-tmins*100);
    segs = segs+tsegs;
    if(segs > 59)
    {
             segs = segs - 60;
             mins = mins + 1;
    }
    mins = mins+tmins;
    if(mins > 59)
    {
            mins = mins - 60;
            hs = hs + 1;
    }
    hs = hs+ths;
    if(hs > 23)
    {
          hs = hs - 24;
    }
    res = hs*10000+mins*100+segs;
}

int main(int argc, char *argv[])
{
    long hora, tiempo, resultado;
    cout << "Ingrese la hora y la hora a sumar (formato hhmmss): ";
    cin >> hora >> tiempo;
    sumarHora(hora, tiempo, resultado);
    cout << resultado;
    getch();
    return 0;
}
