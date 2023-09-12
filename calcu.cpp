#include<iostream>
#include<math.h>
using namespace std;
//Funciones 
float suma(){
    float a , b;
    cout<<"Ingrese su primer numero: ";
    cin>>a;
    cout<<"Ingrese su segundo numero: ";
    cin>>b;
    float suma = a + b;
    cout<<"La suma de sus numeros es"<< suma <<endl;
    return suma;  
}

float resta(){
    float a , b;
    cout<<"Ingrese su primer numero: ";
    cin>>a;
    cout<<"Ingrese su segundo numero: ";
    cin>>b;
    float resta = a - b;
    cout<<"La resta de sus numeros es "<<resta<<endl;
    return resta;
}

float multiplicacion(){
    float a , b;
    cout<<"Ingrese el primer numero para multiplicar: ";
    cin>>a;
    cout<<"Ingrese su segundo numero para multiplicar: ";
    cin>>b;
    float multiplicacion = a*b;
    cout<<"El resultado de su multiplicacion es "<<multiplicacion<<endl;
    return multiplicacion;
}

float division(){
    float a , b;
    cout<<"Ingrese el primer numero para porder dividir: ";
    cin>>a;
    cout<<"Ingrese el segundo numero para poder dividir: ";
    cin>>b;
    float division = a/b;
    cout<<"El resultado de su division es "<<division<<endl;
    return division;
}

int main(){
    suma();
	resta();
	division();
	multiplicacion();	
	
	return 0;
}