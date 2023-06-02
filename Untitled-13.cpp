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

int main(){
    int resultado;
    char respuesta;

    do{
        int num1,num2;
        int opcion;
        cout<<"bienvenido al meunu"<<endl;
        cout<<"1. SUMA"<<endl;
        cout<<"2. RESTA"<<endl;
        cout<<"3. MULTIPLICACION"<<endl;
        cout<<"seleccione una opcion";
        cin>>opcion;

        cout<<"ingrese el primer numero:"<<endl;
        cin>>num1;
        cout<<"ingrese el segundo numero:"<<endl;
        cin>>num2;

        switch(opcion){
            case 1:
            resultado= suma(num1,num2);
            cout<<"el resultado de su suma es:"<<endl;
            break;

            case 2:
            resultado=resta(num1,num2);
            cout<<"el resultado de su resta es:"<<endl;
            break;
            
            case 3:
            resultado=multiplicacion(num1,num2);
            cout<<"el resultado de su multiplicacion es:"<<endl;
            break;
            }
        cout<<"desea realizar otra operacion?(S/N)"<<endl;
        cin>>respuesta;

    }while(respuesta =='s' || respuesta =='S');
     return 0;
}

    

        
        

