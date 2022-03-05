#include "notas.cpp"
#include <iostream>
using namespace std;

Notas notas;

int main(){
	int i;
	float n;

	for(i = 1; i <= 6; i++){

		cout << "Introduzca su nota numero " << i << ": ";
		cin >> n;
		cout << endl;

		while(n < 0 || n > 20){
			cout << "ERROR. La nota tiene que ser entre 0 y 20. Intente nuevamente: ";
			cin >> n;
			cout << endl;
		}

		notas.guardar(n, i - 1);
	}

		cout << "Notas guardadas con exito. " << endl;

		notas.mostrar();

		cout << "\nHa aprobado " << notas.notas_aprobadas() << " notas" << endl;

		cout << "\nSu eficiencia es: " << notas.eficiencia() << endl;

		notas.promedio();

		return 0;
}