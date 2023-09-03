
#include <iostream>
using namespace std;

#pragma region Function that perform Bubble Sorting On string array:
void BubbleSort(string* arr, int size) {
	for (int i = 0; i < size - 1; i++)
	{
		bool flag = false;

		for (int j = 0; j < size - i - 1 && arr[j] > arr[j + 1]; j++) {


			string temp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = temp;
			flag = true;


		}

		if (!flag) {
			break;
		}
	}
}
#pragma endregion


#pragma region Function that Print Values of an String array
void print(string* arrstr, int size) {
	for (int i = 0; i < size; i++)
	{
		cout << arrstr[i] << "  ";
	}
	cout << endl;
}
#pragma endregion


#pragma region Main Program
int main()
{
	string strarr[5] = { "Hamza","Daniyal","Ali","Ahmed","Mark" };
	int  size = sizeof(strarr) / sizeof(strarr[0]);
	print(strarr, size);
	BubbleSort(strarr, size);
	print(strarr, size);


}
#pragma endregion

