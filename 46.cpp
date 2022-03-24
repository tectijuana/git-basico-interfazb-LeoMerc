#include <iostream> 
using namespace std; 

/**problema 46
 * Un banco paga intereses con tasa anual del 5% sobre cuentas menores 
 * que 200; 6% para 200 a 1000 y 7% para mas de 1000. Calcular el 
 * interes de una cuenta cuyo balance se otorga como dato.
 * */

//@Author   LeoMerc
//@Date     3/20/2022

int main() {
    
double balance, tasa, interes, pagofinal; 

 cout << "Ingrese su balance: " << endl; 
 cin >> balance;
if (balance < 200) {
 tasa = .05; 
}
else if (balance >= 200 && balance <= 1000) {
 tasa = .06; 
}
else if (balance > 1000) {
 tasa = .07; 
}
 cout << tasa << endl; 

interes =  tasa * balance; 
pagofinal = interes + balance;

  cout << "El interes final sera de " << interes << endl;
}



