#include <iostream>
#include "cuenta.cpp"
#include <vector>
using namespace std;

int main(){
    vector <Tarjeta> mistarjetas; //num de tarjetas
    vector <Cuenta> miscuentas; //num de cuentas
    int accion = 0;


    cout << "Bienvenido a tus cuentas virtuales!" << endl;
    while (accion < 7) {
            if (accion == 0) { //Instrucciones para el usuario
                cout << "Escriba el número correspondiente a la acción que desea ejecutar." << endl;
                cout << "1. Ver mis tarjetas" << endl << "2. Ver mis cuentas activas" << endl << 
                "3. Agregar una tarjeta"  << endl << "4. Eliminar una tarjeta" << endl << 
                "5. Agregar una cuenta" << endl << "6. Eliminar una cuenta" << endl <<
                "7. Salir " << endl; cin >> accion; cout << "\n";

            } else if (accion == 1){ //Se imprimen todas las tarjetas
                cout << "Mis tarjetas" << endl;
                for (int i=0; i<(mistarjetas.size()); i++) {
                    cout << "\n       Tarjeta " << (i+1) << endl;
                    cout << "Datos de la tarjeta\n";
                    cout << mistarjetas[i].to_string() << endl;

                }
                cout << "\n";
                accion = 0;
                
            } else if (accion == 2) { //Se imprimen todas las cuentas
                cout << "Mis cuentas" << endl;
                for (int i=0; i<(miscuentas.size()); i++) {
                    cout << "\n       Cuenta " << (i+1) << endl;
                    cout << miscuentas[i].to_string();

                }
                cout << "\n";
                accion = 0;

            } else if (accion == 3) { //Se crea una tarjeta y se une al vector
                string nombret;
                int num_tarjetat;
                int vencimientot;
                string tipot;
                int cvvt;
                cout << "Agregue los datos de la tarjeta: " << endl;
                //cin.ignore(numeric_limits<streamsize>::max(), '\n'); //no entiendo esta línea de código
                cout << "Nombre del titular: "; getline(cin, nombret);
                cout << "Número de tarjeta: "; cin >> num_tarjetat;
                cout << "Año de vencimiento: "; cin >> vencimientot;
                cout << "Tipo de tarjeta: "; cin >> tipot;
                cout << "cvv: "; cin >> cvvt;
                cout << endl;
                Tarjeta tarjeta1(cvvt, nombret, num_tarjetat, vencimientot, tipot);
                mistarjetas.push_back(tarjeta1);
                accion = 0;

            } else if (accion == 4) {
                int num_tarjeta_a_eliminar;
                cout << "Ingrese la tarjeta que desea elimiar: "; cin >> num_tarjeta_a_eliminar;
                // Eliminar la tarjeta del vector mistarjetas
                auto iterador_tarjeta = mistarjetas.begin() + (num_tarjeta_a_eliminar - 1);
                mistarjetas.erase(iterador_tarjeta);
                
                // Eliminar cuentas asociadas a esa tarjeta
                for (auto it = miscuentas.begin(); it != miscuentas.end();) {
                    if (it->getTarjeta().getNum_tarjeta() == num_tarjeta_a_eliminar) {
                        it = miscuentas.erase(it);
                    } else {
                        ++it;
                    }
                }

                
                cout << "La tarjeta " + to_string(num_tarjeta_a_eliminar) + " fue eliminada exitosamente\n";
                cout << "\n";


                accion = 0;

            } else if (accion == 5) {
                string serviciot;
                string usuariot;
                string contrat;
                int num_tarjeta;
                cout << "Agregue los datos de la cuenta: " << endl;
                //cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Nombre del servicio: "; cin >> serviciot;
                cout << "Usuario: "; cin >> usuariot;
                cout << "Contraseña: "; cin >> contrat;
                cout << "¿Qué tarjeta desea utilizar para el servicio?: ";
                cin >> num_tarjeta;
                cout << "\n";
                Tarjeta tarjetat = mistarjetas[(num_tarjeta-1)];
                Cuenta cuenta1(serviciot, usuariot, contrat, tarjetat);
                miscuentas.push_back(cuenta1);
                accion = 0;

            } else if (accion == 6) {
                int num_cuenta_a_eliminar;
                cout << "Ingrese la cuenta que desea elimiar: "; cin >> num_cuenta_a_eliminar;
                auto iterador_cuenta = miscuentas.begin() + (num_cuenta_a_eliminar - 1);
                miscuentas.erase(iterador_cuenta);
                cout << "La cuenta " + to_string(num_cuenta_a_eliminar) + " fue eliminada exitosamente\n";
                cout << "\n";
                accion = 0;

            } else if (accion == 7) {
                cout << "Salir"; 

            }
        }

    return 0;
}