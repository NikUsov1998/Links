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

void FillArray(std::vector<int>&arr, int i)
{
	for (auto i = 0; i < arr.size(); i++)
	{
		arr.push_back(rand());  // Генератор рандомных чисел
	}
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

void SimpleSort(std::vector<int>& arr)
{
	for (auto i = 0; i < arr.size(); ++i)
	{
		for (auto j = i; j < arr.size(); ++j)
		{
			if (arr[i] < arr[j])
			{
				auto tmp = arr[i];
				arr[j] = arr[i];
				arr[j] = tmp;
			}
		}
	}
}

void LinksSort(int numArr[], const int SIZE)
{

}
void Swap(std::vector<int>& arr)
{
	arr.swap(arr);
}
void Shrink(std::vector<int>& arr)
{
	arr.shrink_to_fit();
}

int main()
{
	srand(time(NULL)); // Отсчёт секунд от 1970 года для генерации по настоящему случайных чисел
	std::vector<int> numArr;
	FillArray(numArr, 100000);
	Swap(numArr); // меняет ёмкость вектора
	SimpleSort(numArr);
	LinkPrint(numArr);
	return 0;
}