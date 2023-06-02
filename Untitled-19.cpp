#include <iostream>

using namespace std;

double dolaresaeuros(double dolares){
   const double cambio= 0.93;
   return dolares*cambio;
   }

double eurosadolares(double euros){
    const double cambio= 1.20;
    return euros*cambio;
          }

double dolaresapesos(double dolares){
const double cambio=20.05;
return dolares*cambio;
}

int main(){

    char respuesta;
    double resultado;

    do{
        double cantidad;
        int opcion;

        cout<<"Menu"<<endl;
        cout<<"1. convierte dolares a euros"<<endl;
        cout<<"2. convierte euros a dolares"<<endl;
        cout<<"3. convierte dolares a pesos"<<endl;
        cout<<"4. salir"<<endl;
        cout<<"selecciona una opcion"<<endl;
        cin>>opcion;

        switch(opcion){
            case 1:
           cout<< "ingrese la cantidad en dolares"<<endl;
           cin>>cantidad;
           cout<<"la cantidad en euros es:"<<dolaresaeuros(cantidad)<<endl;
           break;

           case 2:
           cout<<"ingrese la cantidad de euros"<<endl;
           cin>>cantidad;
           cout<<"la cantidad en dolares es:"<<eurosadolares(cantidad)<<endl;
           break;

           case 3:
           cout<<"ingrese la cantidad en dolares"<<endl;
           cin>>cantidad;
           cout<<"la cantidad en pesos mexicanos es:"<<dolaresapesos(cantidad)<<endl;
           break;
           }

           cout<<"desearia resolver otra conversion?(S/N)"<<endl;
           cin>>respuesta;

           




      }while(respuesta=='S');


    return 0;

    }