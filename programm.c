#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main(){

	int sizeArray, minElement, maxElement;
	float arrElementsSum = 0; //сумма элементов массива

	cout << "enter size of the array: ";
	cin >> sizeArray;
	cout << endl;
	int *array = new int[sizeArray];
	srand (time(NULL));
	for (int i=0; i < sizeArray; i++){
		array[i] = rand() % 199 -99 ;
		cout << array[i] << " ";
		/*
		выводим по 10 элементов в строку, разделяем символом " "
		i+1 < sizeArray для того чтобы не выводить endl 2 раза
		если элемент последний
		*/
		if(!((i+1)%10) && i+1 < sizeArray)
			cout << endl;
	}
	cout << endl;
	for (int i=0; i < sizeArray; i++)
		arrElementsSum += array[i];
	cout << "the arithmetic mean of the array is equal to: "
		 // выводим среднее арифметическое
		 << arrElementsSum/sizeArray 
		 << " "
		 << endl;
	system("pause");
	maxElement = minElement = array[0];
	for (int i=0; i < sizeArray; i++){
		if (array[i] < minElement) minElement = array[i];
	    if (array[i] > maxElement) maxElement = array[i];
	}
	cout << "the minimum value of the array element is equal to: " 
		 << minElement << endl;
	cout << "the maximum value of the array element is equal to: " 
		 << maxElement << endl;
	system("pause"); //пауза для просмотра результата
	return 0;
}