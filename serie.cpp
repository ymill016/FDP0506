/*Serie de Fibonacci
if 19
for 4}while 13
array 5
Muestra los primeros N términos de la serie de Fibonacci utilizando while.*/

#include <iostream>
using namespace std;

int main (){

    int numero = 5;
    int cont = 0;
    int acum = 0;

    //dos iteraciones
    while (cont != numero){
        while (cont != 1){
            cout << acum << " ";
            acum ++;
            break;
        }
        cout << acum; 
    }
    return 0;
}