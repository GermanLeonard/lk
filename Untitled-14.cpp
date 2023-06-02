#include <iostream>
using namespace std;

int suma(int a, int b){
    return a+b;
    }

int resta(int a, int b){
    return a-b;
    }
int multiplicacion(int a, int b){
    return a*b;
    }
int division(int a, int b){
    if(b !=0){
        return a/b;
        }else{
            cout<<"no se puede dividir entre 0"<<endl;
            return 0;
            }
    
    }

    int main(){
        char respuesta;
        int resultado;
        int opcion;

     do{

        int num1,num2;
        

        cout<<"BIENVENIDO AL MENU"<<endl;
        cout<<"1. sumar dos numeros"<<endl;
        cout<<"2. restar dos numeros"<<endl;
        cout<<"3. multiplicar dos numeros"<<endl;
        cout<<"4. dividir dos numeros"<<endl;
        cout<<"5. salir"<<endl;
        cout<<"ingrese una opcion:";
        cin>>opcion;

        cout<<"ingrese un numero:"<<endl;
        cin>>num1;
        cout<<"ingrese un numero:"<<endl;
        cin>>num2;

       switch(opcion){
        case 1:
        resultado=suma(num1,num2);
        cout<<"el resultado de su suma es:"<<resultado<<endl;
        break;

        case 2:
        resultado=resta(num1,num2);
        cout<<"el resultado de su resta es:"<<resultado<<endl;
        break;

        case 3:
        resultado=multiplicacion(num1,num2);
        cout<<"el resultado de su multiplicacion es:"<<resultado<<endl;
        break;

        case 4:
        resultado=division(num1,num2);
        cout<<"el resultado de su division es:"<<resultado<<endl;
        break;

        case 5:
        cout<<"saliendo del programa"<<endl;
        break;
         default:
                cout << "Opción inválida. Intente nuevamente." << endl;
        }


        cout << "¿Desea realizar otra operación? (S/N): ";
        cin >> respuesta;

        cout << endl;

     } while (respuesta == 'S' || respuesta == 's');
                
        
    
        
      

     return 0;

     }





    

    
