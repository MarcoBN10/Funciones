//Biblioteca principal
#include<iostream>
using namespace std;

//Declaracion de funciones
float Suma(float Num1,float Num2);

//La función principal
int main(){
	
	float Num1, Num2;
	cout<<"Escribe el valor de un numero entero...";
	cin>>Num1;
	cout<<"Escribe el valor de otro numero entero...";
	cin>>Num2;

    float respuesta = Suma(Num1,Num2); 
    cout<<"El resultado de la suma es... "<<respuesta;
}

//Cuerpo de la funcion 
float Suma(float Num1,float Num2){
return Num1+Num2;
}
