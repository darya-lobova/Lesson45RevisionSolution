#include "logic.h"

int main() {
	double array[DEFAULT_SIZE];
	int length;

	do {
		cout << "Input size of array: ";
		cin >> length;
	} while (length <= 0);

	cout << "Input array elements: ";
	for (int i = 0; i < length; i++)
	{
		cin >> array[i];
	}

	double result = find_sum_of_elements(array, length);
	double avg = find_avg(array, length);
	
	cout << "Average: " << avg << endl;
	cout << "Sum of elements: " << result << endl;

	return 0;
}