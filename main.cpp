#include<iostream>
using namespace std;





void InsertAfter(int*& Numbers, int& Size, int Value)
{
	
	int* Temp = new int[Size + 1];

	for (int Index = 0; Index < Size; ++Index)
	{
		Temp[Index] = Numbers[Index];
	}
	Temp[Size] = Value;

	delete[] Numbers;

	Numbers = Temp;

	++Size;
}

int main()
{
	int Size = 5;
	int InsertNumber = 10;

	int* MyArray = new int[Size];

	for (int Index = 0; Index < Size; ++Index)
	{
		MyArray[Index] = Index;
	}

	for (int Index = 0; Index < Size; ++Index)
	{
		cout << MyArray[Index] << " ";
	}
	cout << endl;

	InsertAfter(MyArray, Size, InsertNumber);
	cout << "InsertAfter Completed" << endl;

	for (int Index = 0; Index < Size; ++Index)
	{
		cout << MyArray[Index] << " ";
	}
	
	delete[] MyArray;

	return 0;
}

// InsertAfter(Numbers, Size, 20);

/*for (int i = 0; i < 5; i++)
{
	Dptr[i] = i;
}

delete[] Dptr;*/
