//Biblioteca principal
#include<iostream>
using namespace std;

//Declaracion de funciones
int Max(int a,int b);

//La función principal
int main(){
	
	int Num1, Num2, Num3;
	cout<<"Escribe el primer numero...";
	cin>>Num1;
	cout<<"Escribe el segundo numero...";
	cin>>Num2;
	cout<<"Escribe el tercer numero...";
	cin>>Num3;
	int max1 = Max(Num1,Num2);
	int max2 = Max(max1,Num3);
	cout<<"El numero mayor es..."<<max2;
	return 0;
} 

//Cuerpo de la funcion
int Max(int a,int b){
	int c;
	if (a>b) {c=a;}
	else {c=b;}
	return c;
}





