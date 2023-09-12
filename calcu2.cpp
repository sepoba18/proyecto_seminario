#include<iostream>
#include<math.h>
#ifdef __linux__
#define CLEAR "CLEAR" //CODIGO PARA RECONOCER SISTEMA OPERATIVO
#endif // __linux__
 
#ifdef __MINGW32__
#define CLEAR "CLS"
#define colorear "color b"
#endif // __MINGW32__
using namespace std;
//Funciones 




float suma(){
    float a , b;
    system(CLEAR);
    cout<<"Suma\n";
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
    system(CLEAR);
    cout<<"Resta\n";
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
    system(CLEAR);
    cout<<"Multiplicacion\n";
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
    system(CLEAR);
    cout<<"Division\n";
    cout<<"Ingrese el primer numero para porder dividir: ";
    cin>>a;
    cout<<"Ingrese el segundo numero para poder dividir: ";
    cin>>b;
    float division = a/b;
    cout<<"El resultado de su division es "<<division<<endl;
    return division;
}
float pendientes(){
    float x1, x2, y1 ,y2;
    cout<<"Pendiente\n";
    cout<<"Ingrese el valor de x1: ";
    cin>>x1;
    cout<<"Ingrese el valor de y1: ";
    cin>>y1;
    cout<<"Ingrese el valor de x2: ";
    cin>>x2;
    cout<<"Ingrese el valor de y2: ";
    cin>>y2;
    float pendiente = (y2-y1)/(x2-x1);
    cout<<"Su pendiente es "<<pendiente<<endl;
    cout<<"Su ecuacion de la punto pendiente es: y-"<<y1<<"="<<pendiente<<"(x-"<<x1<<")"<<endl;
    return pendiente;
}
float menu(){
	int opcion;
	cout<<"¿Que operacion matematica quieres hacer?";
	cout<<"\nOpcion 1. Suma\nOpcion 2. Resta\nOpcion 3. Multiplicacion\nOpcion 4. Division\nOpcion 5. Pendiente\nSi no quieres nada selecciona cualquier numero\nProximas funciones en proceso....";
	cout<<"Seleccion: ";
	cin>>opcion;
	switch(opcion) {
  	case 1:
    suma();
    break;
  case 2:
    resta();
    break;
	case 3:
		multiplicacion();
		break;
	case 4:
		division();
		break;
    case 5:
        pendientes();
        break;
  default:
    cout<< "No elegiste ninguna opcion...Apagando...";
    break;
}
}



int main(){
	system(colorear);
	int opcion;
	cout<<"Quieres usar la calculadora?\n1.Si\n2.No\n";
	cout<<"Opcion:\t";
	cin>>opcion;
	system(CLEAR);
	while(opcion == 1){
		menu();	
		cout<<"Quieres usar la calculadora?\n1.Si\n2.No\n";
        cout<<"Opcion:\t";
		cin>>opcion;
		system(CLEAR);
	}
	return 0;
}