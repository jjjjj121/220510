#include<iostream>


using namespace std;


int Count = 0;
void Answer(int* A);
void Sort(int* A);
void end(int* A);
void Print(int* A);


int main()
{

	cin >> Count;
	cout << " " << " ";
	int* New = new int[Count];

	for (int i = 0; i < Count; ++i)
	{
		cin >> New[i];

		cout << " " << " ";

	}

	cout << endl;

	Sort(New);
	Print(New);
	Answer(New);
	end(New);


	return 0;
}


void Answer(int* A)
{
	int Data = 0;

	for (int i = 0; i < Count; ++i)
	{
		Data += A[i];
	}

	cout << "ÃÑ ÇÕ" << Data;

}

void Sort(int* A)
{

	int Temp = 0;

	while (true)
	{
		bool Finish = true;

		for (int i = 0; i < Count - 1; ++i)
		{

			if (A[i] > A[i + 1])
			{

				Temp = A[i];
				A[i] = A[i + 1];
				A[i + 1] = Temp;

				Finish = false;
			}


		}

		if (Finish)
			break;
	}

}

void end(int* A)
{
	delete A;
}

void Print(int* A)
{

	for (int i = 0; i < Count; ++i)
	{
		cout << A[i] << endl;

	}
}