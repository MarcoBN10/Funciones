//Biblioteca principal
#include<iostream>
using namespace std;

//Declaracion de funciones
void Max(float a,float b);

//La función principal
int main(){
	
	int Num1, Num2;
	cout<<"Escribe el primer numero...";
	cin>>Num1;
	cout<<"Escribe el segundo numero...";
	cin>>Num2;
	Max(Num1,Num2);
	return 0;
}

//Cuerpo de la funcion
void Max(float a,float b){
	if (a>b){
		cout<<"El numero mayor es..."<<a;
	}
	else if (a<b){
		cout<<"El numero mayor es..."<<b;
	}
	else 
		cout<<"Error";
	}
