#include <iostream>
using namespace std;

/**problema 47
 * Formar una tabla con cantidades de tal suerte
 * que haya $100 al final de 10, 15, 20 y 25 anios
 * a los 5%, 5.5%, 6%, 6.5% y 7% de interes por anio compuesto
 * mensualmente. Imprimir los anios como encapezado y las tasas en
 * la primera columna de cada fila
 */

//@Author   LeoMerc
//@Date     3/20/2022

int main()
{
    int anios[5] = {10, 15, 20, 25, 30};
    double interes[5] = {0.05, 0.055, 0.06, 0.065, 0.07};
    double cantidad = 100;
    double interescantidad;
    double totalcantidad[5];
    for (int i = 0; i < 5; i++)
    {
        interescantidad = cantidad * interes[i];
        totalcantidad[i] = cantidad + interescantidad;
    }
    cout << "Anios:    " << anios[0] << "      " << anios[1] << "     " << anios[2] << "    " << anios[3] << "    " << anios[4] << endl;
    cout << "Interes: " << interes[0] << "  " << interes[1] << "  " << interes[2] << "  " << interes[3] << "  " << interes[4] << "  " << endl;
    cout << "Cantidad: " << totalcantidad[0] << "  " << totalcantidad[1] << "  " << totalcantidad[2] << "  " << totalcantidad[3] << "  " << totalcantidad[4] << "  ";
}
