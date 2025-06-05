/*Tarifa de Luz Eléctrica
Calcula la tarifa según el consumo: 
menor a 100 kWh, tarifa baja; entre 100 y 200 kWh, 
tarifa media; más de 200 kWh, tarifa alta.
if-esle 19*/

#include <iostream>
using namespace std;

int main (){
    int consumoEnergia;
    int tarifa = 10; 
    int tarifaTotal;

    cout << "Tarifa de luz electrica\n";
    cout << "Dame el dato de tu consumo de energia: ";
    cin >> consumoEnergia;

    if (consumoEnergia < 100){
        cout << "Has consumido " << consumoEnergia << "kwh\n";
        cout << "Tu tarifa a pagar es baja: " << "$"<< tarifa;
    }else if (consumoEnergia >= 100 && consumoEnergia <= 200){
        cout << "Has consumido " << consumoEnergia << "kwh\n";
        cout << "Tu tarifa a pagar es media: " << "$" << tarifa * 2;
    }else if (consumoEnergia > 200){
        cout << "Has consumido " << consumoEnergia << "kwh\n";
        cout << "Tu tarifa a pagar es media: " << "$" << tarifa * 4;
    }else {
        
    }
    return 0;
}