#include <iostream>
using namespace std;

#pragma region Function that Perform insertion Sort in reverse order
void insertionSort(int* arr, int size) {

	for (int i = size - 2; i >= 0; i--)
	{
		int key_val = arr[i];
		int j = i + 1;
		while (j <size && key_val >arr[j])
		{
			arr[j - 1] = arr[j];
			arr[j] = key_val;
			j++;
		}

	}
}
#pragma endregion

#pragma region Funcion that print the array
void print(int* arr, int size) {
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
#pragma endregion



int main() {

	int arr[3] = { 3,2,1 };//declaration and assaignation
	int size = sizeof(arr) / sizeof(arr[0]);//getting size
	insertionSort(arr, size);// Perform insertion sorting
	print(arr, size);//Print the array
	return 0;
}
