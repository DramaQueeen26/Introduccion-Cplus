#include "programa.cpp"
#include <iostream>
using namespace std;

programa llamarF;
int m, s, num, num1, num2;

int main(){
	//Ejercicio 1
	llamarF.nombreCompleto();

	//Ejercicio 2
	cout << "\nIngresa los minutos: ";
	cin >> m;
	while(m < 0 || m >= 60){
		cout << "Error, vuelve a introducir los minutos correctamente: ";
		cin >> m; 
	}
	cout << "Ingresa los segundos: ";
	cin >> s;
	while(s < 0 || s >= 60){
		cout << "Error, vuelve a introducir los segundos correctamente: ";
		cin >> s; 
	}
	llamarF.minutos(m, s);

	//Ejercicio 3
	cout << "\nIngrese un numero entre 1 y 100: ";
	cin >> num;
	while(num <= 0 || num > 100){
		cout << "Error. Ingresa un numero entre 1 y 100: ";
		cin >> num;
	}
	llamarF.divisores(num);

	//Ejercicio 4
	cout << "\nIngrese un numero: ";
	cin >> num1;
	cout << "Ingrese otro numero: ";
	cin >> num2;
	llamarF.menor(num1, num2);

	//Ejercicio 5
	llamarF.rif();

	//Ejercicio 6
	llamarF.menu();

	return 0;
}

