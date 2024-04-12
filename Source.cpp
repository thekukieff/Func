#include <iostream>
using namespace std;

float Srednee(float arr[], int size);

void Fill(float arr[], int SIZE);

void PlusMinusZero(float arr[], int size);

int main() {
	setlocale(LC_ALL, "ru");

	const int SIZE = 5;
	float arr[SIZE];
	Fill(arr, SIZE);
	cout << Srednee(arr, SIZE)<<endl;
	PlusMinusZero(arr, SIZE);

	return 0;
}

float Srednee(float arr[], int size) {
	float sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += i;



	}
	return sum / size;

}

void Fill(float arr[], int SIZE) {
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = i - 2;
	}


}



void PlusMinusZero(float arr[], int size)
{
	int plus = 0, minus = 0, zero = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] > 0) {
			plus++;
		}
		else if (arr[i] == 0) {
			zero++;
		}
		else {
			minus++;
		}

	}
	cout << "Больше 0: " << plus<<endl;
	cout << "Меньше 0: " << minus<<endl;
	cout << "Равно 0: " << zero<<endl;

}


