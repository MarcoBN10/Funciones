//Biblioteca principal
#include<iostream>
using namespace std;

//Declaracion de funciones
int Factorial(int a);

//La función principal
int main(){
	int Num1;
	cout<<"Escribe un numero para obtener su factorial...";
	cin>>Num1;
	int fact = Factorial(Num1);
	cout<<" "<<Num1, cout<<"! es..."<<fact;
	return 0;
}

	//Cuerpo de la funcion
	int Factorial(int a){
		int i;
		int respuesta=1;
		for(i=1;i<=a; i++) {respuesta *=i;
		}
		return respuesta;
	}
