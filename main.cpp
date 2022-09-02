// =================================================================
//
// File: main.cpp
// Author: Daniel Felipe Hurtado
// Date: 31 / 08 / 2022
//
// =================================================================
#include <iostream>
#include <vector>
#include <fstream>
#include "header.h"
#include "search.h"
#include "bubble.h"
#include "selection.h"
#include "insertion.h"

using namespace std;

int main(int argc, char* argv[]) {

	ifstream inputFile;
	
	int size_n, size_q;

	for (int i = 1; i < 5; i++) {
		
		//Open file and read variables
		
		string fileName = "input" + to_string(i) + ".txt";
		inputFile.open(fileName);
		cout << "Archivo: " << fileName << endl;

		int current_line = 0;
		string line;
		getline(inputFile, line);
		
		while(current_line < 4) { 
			if(current_line == 0) {
				getline(inputFile, line);
				inputFile >> size_n;
			}
			else if(current_line == 2) {
				getline(inputFile, line);
				inputFile >> size_q;
			}
			
			current_line++;
			
		}

		cout << "Size n: " << size_n << endl;
		cout << "Size q: " << size_q << endl;
		inputFile.close();
		

	}

	






	return 0;
}


// Lea n datos
// los ordene
// indique la cantidad de comparaciones (burbuja, insercion, seleccion)
// leer q valores
// mostrar la posicion de cada valor en el arreglo (-1 si no esta)
// mostrar la cantidad de comparaciones (busqueda secuencial, busqueda binaria)

// Entrada
// n es int positivo entre 300 y 500 inclusive
// n es el numero de datos a leer
// q indica cantidad de numeros a buscar
// q a leer

// Salida
// 1 linea = numero de comparaciones de cada algoritmo (burbuja, insercion, seleccion)
// q linea = posicion, cantidad de comparaciones de sequencial y cantidad de comparacioens de binaria