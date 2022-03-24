#include <iostream>
#include <math.h>
using namespace std;

/**problema Cap3Prog9
 * Encontrar el tercer lado de un triangulo rectangulo
 * mediante el teorema de pitagoras.
 * */

//@Author   LeoMerc
//@Date     3/20/2022

int main()
{
    int  respuesta;
    double A, B, C;
    cout << "Quiere descubrir un cateto(1) o hipotenusa(2)? ";
    cin >> respuesta;

    if (respuesta == 1)
    {
        cout << "Ingrese un cateto: ";
        cin >> A;
        cout << "Ingrese la hipotenusa: ";
        cin >> C;

        B = sqrt(pow(C, 2) - pow(A, 2));
        cout << "El cateto faltante era: " << B;
    }

    else if (respuesta == 2)
    {
        cout << "Ingrese un cateto: ";
        cin >> A;
        cout << "Ingrese otro cateto: ";
        cin >> B;

        C = sqrt(pow(B, 2) + pow(A, 2));
        cout << "La hipotenusa es: " << C;
    }
    else
    {
        cout << "No ingreso un valor valido";
    }
}
