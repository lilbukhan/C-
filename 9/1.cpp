#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main(void) {
	const int lenght = 10;
	int arr[lenght];

	for (int  i = 0; i < lenght; i++)
	{
		arr[i] = int(rand() % 100);
	}

	cout << "Масив, наповнений довільними (до 100) числами: " << endl;

	for (int i = 0; i < lenght; i++)
	{
		cout << arr[i] << " ";
	}

	sort(arr, arr + lenght);

	cout << "\nВідсортований масив: " << endl;

	for (int i = 0; i < lenght; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}