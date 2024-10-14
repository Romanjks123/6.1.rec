#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* t, const int size, const int Low, const int High, int i)
{
	t[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)
		Create(t, size, Low, High, i + 1);
}
void Print(int* t, const int size, int i)
{
	cout << "a[" << setw(2) << i << " ] = " << setw(4) << t[i] << endl;
	if (i < size - 1)
		Print(t, size, i + 1);
	else
		cout << endl;
}
int Sum(int* t, const int size, int i)
{
	if (i < size)
	{
		if (t[i] <= 0 && t[i] % 5 != 0)
			return t[i] + Sum(t, size, i + 1);
		else
			return Sum(t, size, i + 1);
	}
	else
		return 0;
}

int main()
{
	srand((unsigned)time(NULL)); // ініціалізація генератора випадкових чисел
	const int n = 25;
	int t[n];
	int Low = -20;
	int High = 37;
	Create(t, n, Low, High, 0);
	Print(t, n, 0);
	cout << "S = " << Sum(t, n, 0) << endl;
	return 0;
}