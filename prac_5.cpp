#include <iostream>
using namespace std;

// abecedario
char abecedario[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

// para almacenar los valores generados
int numero[10];
char c[10];

// Funci�n para generar un car�cter aleatorio del abecedario
char generarCaracter() {
	return abecedario[rand() % 26];
}

// Funci�n para generar un n�mero aleatorio entre 0 y 50
int generarNumero() {
	return rand() % 51;
}

// Funci�n para generar valores aleatorios y llenar los arreglos
void generarValores() {
	for (int i = 0; i < 10; i++) {
		numero[i] = generarNumero();
		c[i] = generarCaracter();
	}
}

// Funci�n para imprimir los valores almacenados en los arreglos
void imprimir() {
	cout << "Car\tNum" << endl;
	for (int i = 0; i < 10; i++)
		cout << c[i] << "\t" << numero[i] << endl;
}

int main(int argc, char *argv[]) {
	// Llamamos a la funci�n para generar los valores aleatorios
	generarValores();
	
	// Llamamos a la funci�n para imprimir los valores
	imprimir();
	
	return 0;
}

