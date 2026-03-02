// Task 04 [The swap of extreme elements]
// Обмен экстремальных элементов
// 
// Дан вектор целочисленных значений. Необходимо спроектировать 
// и реализовать функцию, которая меняет экстремальные элементы 
// вектора местами. Если экстремальных элементов несколько, 
// то необходимо поменять первые найденные элементы.

#include "logic.h"

int min(int array[DEFAULT_SIZE], int size) {
	int min_value = 0;
	for (int i = 0; i < size; i++)
	{
		if (array[i] < array[min_value]) {
			min_value = i;
		}
	}
	return min_value;
}

int max(int array[DEFAULT_SIZE], int size) {
	int max_value = 0;
	for (int i = 0; i < size; i++)
	{
		if (array[i] > array[max_value]) {
			max_value = i;
		}
	}
	return max_value;
}

void swap_extrem_elements(int array[DEFAULT_SIZE], int size) {
	int max_index = max(array, size);
	int min_index = min(array, size);

	int temp = array[max_index];
	array[max_index] = array[min_index];
	array[min_index] = temp;
}
