#include<iostream>

float suma(float a, float b){
	float suma = a + b;


	return suma;
};


float resta(float a,float b){
	float resta = a-b;
	return resta;
};


float division(float a,float b){
	float division = 0;
	if(b == 0){
		std::cout << "Division por " << b << " no permitida";
	}
	else {
		float division = a/b;
	};
	return division;
}


float multiplicacion(float a,float b){
	float multiplicacion = a*b;
	
	
	return multiplicacion;
}

int main() {
	suma(2,2);
	resta(2,2);
	division(2,2);
	multiplicacion(2,2);	
}
