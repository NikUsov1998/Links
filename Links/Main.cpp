#include <iostream>
#include <random>
#include <ctime>

void FillArray(int numArr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		numArr[i] = rand(); // Генератор рандомных чисел
	}
}
void FillArray(std::vector<int>&arr, int cap)
{
	for (auto i = 0; i < cap; ++i)
	{
		//if (i >= arr.capacity())
		//	arr.resize(i + 1);
		arr.push_back(rand());  // Генератор рандомных чисел
	}
	arr.shrink_to_fit();
}

void LinkPrint(int numArr[], const int SIZE)
{
	std::cout << "Adress: \tData: " << "\n";
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << &(numArr[i]) << "\t" << numArr[i] << "\n";
	}
} 
void LinkPrint(std::vector<int> arr)
{
	std::cout << "Adress: \tData: " << "\n";
	for (auto i = 0; i < arr.size(); i++)
	{
		std::cout << &(arr[i]) << "\t" << arr[i] << "\n";
	}
}

void BubbleSort(std::vector<int>& arr)
{
	int i, j;
	for (i = 0; i < arr.size() - 1; i++)
		for (j = 0; j < arr.size() - i - 1; j++)
			if (arr[j] > arr[j + 1])
				std::swap(arr[j], arr[j + 1]);
}
void LinksBubbleSort(std::vector<int>&arr)
{
	int i, j;
	int* pi = &i;
	int* pj = &j;
	for (i = 0; i < arr.size() - 1; i++)
		for (j = 0; j < arr.size() - i - 1; j++)
			if (arr[*pi] > arr[*pj + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[i];
				arr[i] = tmp;
			}
}

int main()
{
	srand(time(NULL)); // Отсчёт секунд от 1970 года для генерации по настоящему случайных чисел
	std::vector<int> numArr1, numArr2;
	FillArray(numArr1, 10);
	FillArray(numArr2, 10);
	BubbleSort(numArr1);
	LinksBubbleSort(numArr2);

	//std::vector<int>* pointerArr = &numArr;
	//int* pnA = &numArr[0];
	//LinksBubbleSort(pointerArr);
	//LinkPrint(numArr1);
	//std::cout << numArr1[0] << '\t' << &numArr1[0] << '\t' << std::endl;
	return 0;
}