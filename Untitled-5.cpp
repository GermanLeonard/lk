#include <iostream>
#include <conio.h>
#include <clocale>
#include <cmath>

using namespace std;

int main(){
    setlocale(LC_CTYPE,"Spanish");

    float Ci =0;
    float Ti   =0;
    float t   =0;
    float resultado =0;

    while(Ci<=0){
        cout<<"ingrese el capital inicial:";
        cin>>Ci;
     } 

     while(Ti<=0){
        cout<<"ingrese la tasa de interes anual:";
        cin>>Ti;
     }

    while(t<=0){
        cout<<"ingrese el tiempo en años:";
        cin>>t;
     }

        resultado = Ci * pow((1+ (Ti/100)),t);
        cout<<"el dinero que se genero al final del tiempo de la inversion es: "<<resultado;




   getch();
    return 0;

}