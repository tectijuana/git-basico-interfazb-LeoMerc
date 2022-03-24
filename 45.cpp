#include <iostream> 
using namespace std; 

/**problema 45
 * Un albanil pide prestado 1000 y acuerda pagar 90 mensuales
 * durante 12 meses. Regresara entonces 1080, lo que parece 
 * representar un interes de solo el 8 del prestamo original.
 * Mediante calculos con algunas pocas tasas diferentes compuestas mensualmente, 
 * determinar la tasa de interes anual verdadera con un margen del 1%.
 * */

//@Author   LeoMerc
//@Date     3/20/2022




int main() {
double recibe = 1000,  tasa, pago = 1080, pagofinal;
double interes; 
 for (int x = 0; x<10; x++){

        tasa = (x+1.0)/ 100; 
        interes =  tasa * recibe; 
        pagofinal = interes + recibe;

        if(pagofinal == pago) {
           tasa = tasa * 100; 
            cout << "La tasa de interes correcta es de " << tasa  << "%" << endl;
        }

    }

}


