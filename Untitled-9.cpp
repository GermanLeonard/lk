#include <iostream>

using namespace std;


int main(){

    int numero;
    int suma=0;

    do{
        cout<<"DIGITE UN NUMERO:";
        cin>>numero;

        if(numero>0){
            suma= suma+numero;


            }



     }while(((numero<20) ||(numero>30) ) &&(numero !=0));

     cout<<"la suma es:"<<suma<<endl;





  return 0;

}