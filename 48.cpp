#include <iostream>
using namespace std;

/**problema 48
 * Va a amortizar una hipoteca de 35,000 a razon de 310 por mes.
 * Va a cargarse un interes del 8% anual, calculado mensualmente.
 * Escribir un programa que calcule una tabla de cuatro columnas
 * para mostrar el numero de pago, el balance, el interes para cada
 * mes y la cantidad abonada al principal para cada mes.
 * */

//@Author   LeoMerc
//@Date     3/20/2022

int main()
{

    double hipoteca = 35000, razon = 310, interes = 0.08, num = 0, interesactual = 0;
    interes = 0.08 / 12;
    cout << "Iteracion\t"
         << "Restante\t"
         << "Interes "
         << "Pago " << endl;
    do
    {
        interesactual = interes * hipoteca;
        hipoteca = hipoteca - razon;
        hipoteca += interesactual;
        num++;
        cout << num << "\t\t" << hipoteca << "\t\t" << interesactual << "\t" << razon << "\t" << endl;

    } while (hipoteca > 0);
}
