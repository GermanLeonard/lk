#include <iostream>

using namespace std;

int suma(int a, int b){
    return  a +  b;
    }

int multiplicacion(int a, int b){
    return a*b;
    }

int resta(int a, int b){
    return a-b;
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

    do{
        

        int num1,num2;
        int operacion;

        cout << "=== MENU ===" << endl;
        cout << "1. Suma" << endl;
        cout << "2. Multiplicacion" << endl;
        cout << "3. Resta" << endl;
        cout << "4. Division" << endl;
        cout << "Ingrese la operacion: ";
        cin >> operacion;

        cout<<"ingrese el primer numero:";
        cin>>num1;
        cout<<"ingrese el segundo numero";
        cin>>num2;
        

        switch(operacion){
            case 1:
            resultado=suma(num1,num2);
            cout<<"el resultado de la suma es:"<<resultado<<endl;
            break;

            case 2:
            resultado=multiplicacion(num1,num2);
            cout<<"el resultado de su multiplicacion es:"<<resultado<<endl;
            break;

            case 3:
            resultado=resta(num1,num2);
            cout<<"el relsultado de su resta es:"<<resultado<<endl;
            break;

            case 4:
            resultado=division(num1,num2);
            cout<<"el resultado de su multiplicacion es:"<<resultado<<endl;
            break;
          }  
          cout<<"desea realizar otra operacion?(S/N)" ;
          cin>>respuesta;
    }while(respuesta=='S'|| respuesta =='s');
          return 0;

}





