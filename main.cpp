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
	ofstream outputFile;

	int size_n, size_q;

		
	//Open file and read variables
	inputFile.open(argv[1]);
	outputFile.open(argv[2]);

	// n 

	inputFile >> size_n;
	vector<int>vector_n(size_n);
	for(int n = 0; n < size_n; n++) {
		inputFile >> vector_n[n];
	}
	
	// Copy vectors
	vector<int> vector_n_copy_1 = vector_n;
	vector<int> vector_n_copy_2 = vector_n;

	// Sorting vectors
	int insertionSort_n = insertionSort(vector_n_copy_1);
	int bubbleSort_n = bubbleSort(vector_n_copy_2);
	int selectionSort_n = selectionSort(vector_n);

	outputFile << bubbleSort_n << " " << selectionSort_n << " " << insertionSort_n << endl << endl;

	// q
	inputFile >> size_q;
	pair<int,int> sequentialSearch_q;
	pair<int,int> binarySearch_q;

	int data_q;

	// Search
	for(int q = 0; q < size_q; q++) {
		inputFile >> data_q;
		sequentialSearch_q = sequentialSearch(vector_n, data_q);
		outputFile << sequentialSearch_q.first << ' '
				<< sequentialSearch_q.second << ' ';
		binarySearch_q = binarySearch(vector_n, data_q);
		outputFile << binarySearch_q.second << '\n';
	}

	// Close file
	inputFile.close();
	outputFile.close();

	return 0;
}