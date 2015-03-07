#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char *argv[])
{
    int n;
    cout << "Ingrese numero limite: ";
    cin >> n;
    for(int i = 0; i <= n; i++)
    {
            cout << i << endl;
    } 
    getch();
    return 0;
}
