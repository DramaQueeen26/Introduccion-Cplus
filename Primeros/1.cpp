#include <iostream>
#include <string>
using namespace std;

void cadena_entero(int entero, string cadena);

int entero;
string cadena;

int main(){
	cout << "Coloque una cadena " << endl; getline(cin, cadena);
	cout << "Coloque un número entero " << endl; cin >> entero;

	cadena_entero(entero, cadena);
}

void cadena_entero(int entero, string cadena){
	cout << "El contenido de la cadena es " << cadena << " y el doble del número es " << entero*2 <<endl;
}