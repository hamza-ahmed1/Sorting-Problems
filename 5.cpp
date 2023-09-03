#include <iostream>
using namespace std;

#pragma region Function that Print Crate's array size
void Print(int* arr, int size) {
	cout << "---------\tPrinting In asscending manner -------\n\n";

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "  ";
	}cout << endl;
}
#pragma endregion

#pragma region Function that Rearrange the crates data as new entry came into shipbook (for data of that crates which has been out)
void InsertionSort(int* arr, int size) {

	cout << "---------\tRearranging Has Been Performed-------\n\n";


	for (int i = 1; i < size; i++)
	{
		int key_val = arr[i];

		int j = i - 1;
		while (j >= 0 && arr[j] > key_val)
		{
			arr[j + 1] = arr[j];
			arr[j] = key_val;
			j--;
		}

	}

}
#pragma endregion



#pragma region Functtion that Take crate's size as input and arrange all creates  by calling  InsertionSort() and print the array by calling  Print()
void Input(int* arr, int size) {
	cout << "-----\tEnter size of crate which is being out\n\n";
	for (int i = 0; i < size; i++)
	{
		cout << "Enter crate's size[" << i + 1 << "] :";
		cin >> arr[i];

		if (i > 0) {
			InsertionSort(arr, i + 1);
			Print(arr, i + 1);
		}

	}

	cout << "\t\tShip has been empty all creates way out!---" << endl;

}
#pragma endregion


int main() {
	int CratesRecord[5]; //declare Array for kept record of Crates Data
	Input(CratesRecord,sizeof(CratesRecord)/sizeof(CratesRecord[0]));
	

}
