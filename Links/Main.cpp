#include <iostream>
#include <random>
#include <ctime>

void FillArray(int numArr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		numArr[i] = rand(); // ��������� ��������� �����
	}
}
void FillArray(std::vector<int> arr, int i)
{
	for (int i = 0; i < arr.size(); i++)
	{
		arr[i] = rand(); // ��������� ��������� �����
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
	for (int i = 0; i < arr.size(); i++)
	{
		std::cout << &(arr[i]) << "\t" << arr[i] << "\n";
	}
}

void SimpleSort(int numArr[], const int SIZE)
{

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
	srand(time(NULL)); // ������ ������ �� 1970 ���� ��� ��������� �� ���������� ��������� �����
	//const int SIZE = 20;
	//int numArr[SIZE];
	std::vector<int> numArr;
	for (int i = 0; i < 1000000; ++i)
	{
		numArr.push_back(rand());
	}
	Shrink(numArr); // �� ������ ������� �������
	Swap(numArr); // ������ ������� �������
	//FillArray(numArr, n);
	LinkPrint(numArr);
	return 0;
}