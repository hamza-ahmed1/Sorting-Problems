// lab 02 code file.cpp : this file contains the 'main' function. program execution begins and ends there.
//

#include <iostream>
using namespace std;

#pragma region function that print array in unsorted manner
void printunsortedarray(int* arr, int start_index, int last_index) {
	cout << "\t\t---printint unsorted array's segment ----" << endl;
	for (int i = start_index; i <= last_index; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
}
#pragma endregion


#pragma region function that sort the segment of an array
void sort(int* arr, int start_index, int last_index) {
	cout<<"Inside Sort fun" <<start_index<<last_index<<endl;
	for (int i = start_index; i <last_index+1; i++)
	{
		int min_index = i;
		for (int j =i+1; j < last_index+1; j++)
		{
			if (arr[j] < arr[min_index]) {
				min_index = j;
			}
		}
	
	if (min_index != i) {
			int temp = arr[i];
			arr[i] = arr[min_index];
			arr[min_index] = temp;
		}
	}
	cout << "\t\t---sorting has been performed on unsorted segment ----" << endl;
}
#pragma endregion



#pragma region function that print the array
void print(int* arr, int size) {
	cout << "\t\t---printing array----" << endl;

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
}
#pragma endregion


#pragma region function that find out unsorted sagment inside an array ,print that sagment then sort it and again print whole array
void findunsortedarraysagment(int* arr, int size) {
	int start_index = 0, end_index = size - 1;



	while (start_index < size - 1 && arr[start_index] < arr[start_index + 1])
	{
		start_index++;

	}
	cout << "Start index : " << start_index << endl;

	while (end_index > 0 && arr[end_index] > arr[end_index - 1])
	{
		end_index--;

	}
	cout << "End index : " << end_index << endl;
	print(arr, size);

	printunsortedarray(arr, start_index , end_index + 1);//find unsorted sagment

	sort(arr, start_index-1 , end_index+1 );//sort that sagment

	print(arr, size);//print whole array

}
#pragma endregion




int main() {
	int arr[] = { 10, 12, 20, 30, 25, 40, 32, 31, 35, 50, 60 };//array1 
	findunsortedarraysagment(arr, sizeof(arr) / sizeof(arr[0]));//for finding,sorting and then printing


	int arr1[] = { 0, 1, 15, 25, 6, 7, 30, 40, 50 };//array2 
	findunsortedarraysagment(arr1, sizeof(arr1) / sizeof(arr1[0]));//for finding,sorting and then printing
}




#pragma region another function for same working but not efficient
/*void findunsortedsagment() {
bool flag = true;
for (int i = 0; i < size && flag; i++)
{
	int key_val = arr[i];
	for (int  j = i+1; j < size; j++)
	{
		if (arr[j] < key_val) {
			start_index = i;
			flag = false;
		}


	}

}
flag = true;
for (int i = size-1; i >=0 && flag; i--)
{
	int key_val = arr[i];
	for (int j =i-1; j >=0; j--)
	{
		if (arr[j] > key_val) {
			end_index = i+1;
			flag = false;
		}
	}
}
unsortedarray(arr, start_index,end_index);
}*/

#pragma endregion


