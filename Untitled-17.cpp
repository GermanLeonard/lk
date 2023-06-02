//menu que permita la conversion de dolares a euros, euro a dolar, dolar a peso mexicano,serian 3 funciones un menu y mostrar los resultados

#include <iostream>

using namespace std;

double dolaresaeuros(double dolares){
    const double tipocambio = 0.85;
    return dolares*tipocambio;
    }

double euroadolar(double euros){
    const double tipocambio = 1.18;
    return euros*tipocambio;
    }
double dolaresapesos(double dolares){
    const double tipocambio  =20.05;
    return dolares*tipocambio;
    }
    int main(){

        char respuesta;
        double resultado;

        do{
            double num1;
            int opcion;

            cout<<"BIENVENIDO AL MENU"<<endl;
            cout<<"1. dolares a euros"<<endl;
            cout<<"2. euro a dolares"<<endl;
            cout<<"3. dolares a pesos mexicanos"<<endl;
            cout<<"4. salir"<<endl;
            cout<<"ingrese una opcion"<<endl;
            cin>>opcion;

            

            switch(opcion){
                case 1:
                cout << "Ingrese la cantidad en dólares: ";
                cin >> num1;
                cout << "La cantidad en euros es: " << dolaresaeuros(num1) <<endl;
                break;
                

                case 2:
                cout<<"ingresa la cantidad en euros";
                cin>>num1;
                cout<<"la cantidad a dolares es"<< euroadolar(num1)<<endl;
                break;

                case 3:
               
                cout<<"ingresa la cantidad de dolares:";
                cin>>num1;
                cout<<"la cantidad a pesos mexicanos es"<< dolaresapesos(num1)<<endl;

                break;

            }
            cout<<"quiere realizar otra operacion?(S/N)"<<endl;
            cin>>respuesta;

             }while(respuesta=='S'||  respuesta=='s');


            return 0;


            }