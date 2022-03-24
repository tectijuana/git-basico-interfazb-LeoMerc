#include <iostream>
#include <math.h>
using namespace std;

/**problema 51
 * La familia Nares va a comprar una casa con un credito hipotecario
 * de un banco. El prestamo original fue de 45,000 al 8% de interes
 * anual. El Sr. Nares hace pagos mensuales de 375, que incluyen
 * intereses y abonos al prestamo. El interes se calcula cada mes
 * sobre saldos insolutos. El primer mes el interes es
 * i = (45000) X (.08) X 0.5 = 300. Por lo tanto, se abona al
 * prestamo 375 - 300 = 75. El saldo insoulto es entonces
 * 45000 -75 = 44925. El interes para el segundo mes se calcula
 * sobre este nuevo balance. Imprimir una tabla de pagos para los
 * primeros 72 meses
 * */

//@Author   LeoMerc
//@Date     3/20/2022

int main()
{
    double hipoteca = 45000, razon = 375, interes = 0.08, num = 0, interesactual = 0;
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

    } while (num < 72);
}
