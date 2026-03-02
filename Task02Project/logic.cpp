// Task 02 [The sum of average elements]
// Сумма средних элементов
// 
// Дан вектор вещественных(дробных) значений. Необходимо спроектировать
// и реализовать функцию, которая находит сумму всех элементов вектора,
// абсолютная величина которых меньше среднего арифметического всех элементов.
// Далее необходимо разработать полноценный или тестовый проект для полной 
// демонстрации работоспособности данной функции.

#include "logic.h"

double find_avg(double array[DEFAULT_SIZE], int length) {

	double avg;
	double sum = 0;
	for (int i = 0; i < length; i++)
	{
		sum += array[i];
	}
	avg = sum / length;
	return avg;
}

double find_sum_of_elements(double array[DEFAULT_SIZE], int length) {

	double avg = find_avg(array, length);
	double sum = 0;

	for (int i = 0; i < length; i++)
	{
		if (abs(array[i]) < avg) {
			sum += array[i];
		}
	}
	return sum;

}