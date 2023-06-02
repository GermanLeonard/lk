#include <iostream>

using namespace std;

int main(){

    int opcion =0;
    int resultado=0;
    int a=0;
    int b;0;

 
    do {

        
        cout << "1. realizar una suma\n";
        cout << "2. Realizar una resta\n";
        cout << "3. realizar una multiplicacion\n";
        cout << "4. realiazr una multipliacion\n";
        cout <<  "5. finalizar el programa\n";
        cout << "Ingrese una opcion\n: ";
        cin >> opcion;

      switch(opcion){

        case 1:
        cout<<"ingrese un numero:";
        cin>>a;
        cout<<"ingrese un numero:";
        cin>>b;
        cout<<a+b;
        break;

        case 2:
        cout<<"ingrese un numero:";
        cin>>a;
        cout<<"ingrese un numero:";
        cin>>b;
        cout<<a-b;
        break;

        case 3:
        cout<<"ingrese un numero:";
        cin>>a;
        cout<<"ingrese un numero:";
        cin>>b;
        cout<<a/b;
        break;

        case 4:
        cout<<"ingrese un numero";
        cin>>a;
        cout<<"ingrese un numero:";
        cin>>b;
        cout<<a*b;
        break;

        case 5:
        cout<<"fin del programa";
        break;

    
     }

} while (opcion != 5);


    return 0;


    }