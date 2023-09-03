#include <iostream>
using namespace std;
class Date
{
public:
	Date(int d, int m, int y);
	~Date();
	friend void SelectionSort(Date* d, int size);//for sorting
	friend void PrintDates(Date* d, int size);//for printing

	int date, month, year;
private:



};



Date::Date(int d, int m, int y)
{
	date = d;
	month = m;
	year = y;
}


Date::~Date()
{
}
#pragma region Program that Sort the Date Array
void SelectionSort(Date* d, int size)
{
	for (int i = 0; i < size; i++)
	{
		int min_index = i;
		int  j;
		for (j = i + 1; j < size; j++)
		{
			if (d[i].year > d[j].year) {
				min_index = j;
			}
			else if (d[i].year == d[j].year && d[i].month > d[j].month) {
				min_index = j;
			}
			else if (d[i].year == d[j].year && d[i].month == d[j].month && d[i].date > d[i].date) {
				min_index = j;
			}
		}
		if (i != j) {
			Date date = d[i];
			d[i] = d[min_index];
			d[min_index] = date;
		}


	}
}
#pragma endregion


#pragma region Function that Print the Date Array

void PrintDates(Date* d, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << d[i].date << "/";
		cout << d[i].month << "/";
		cout << d[i].year << "  ";
	}
	cout << "\n\n";
}

#pragma endregion





int main() {

	Date dates[5] = { Date(1,5,2003),Date(9,2,2003) ,Date(1,2,1999) ,Date(9,2,1880) ,Date(1,2,1800) };//declaration and assaignation
	int size = sizeof(dates) / sizeof(dates[0]);//getting size
	PrintDates(dates, 5);//Print as unsorted
	SelectionSort(dates, size);//sorting
	PrintDates(dates, size);//print as sorted
	return 0;
}