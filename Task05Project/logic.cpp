// Task 05 [The reverse algorithm]
// Алгоритм обратной перестановки
// 
// Дан вектор целочисленных значений. Необходимо спроектировать 
// и реализовать функцию, которая реверсирует элементы вектора 
// начиная с позиции a и заканчивая позицией b, включая данные позиции.

#include "logic.h"

void reverse(int array[DEFAULT_SIZE], int size, int a, int b) {

	if (a > b) {
		int t = a;
		a = b;
		b = t;
	}
	if (size < 0) {
		return;
	}

	a = a < 0 ? 0 : a;

	for (int i = 0; i < size; i++)
	{
		if (array[i] == a - 1) {
			array[a] == array[i];
		}
		if (array[i] == b - 1) {
			array[b] == array[i];
		}
	}

	for (int i = 0; i < size / ((b - a) + 1) / 2; i++)
	{
		int temp = array[a];
		array[a] = array[b];
		array[b] = temp;

	}

}