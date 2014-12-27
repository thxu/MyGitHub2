#include <iostream>
using namespace std;
#define n  10
int a[n] = { 3, 8, 2, 7, 20, 5, 3, 4, 6, 0};
void move()
{
	int i = 0, j = n - 1;
	int p = a[0];
	int tmp;
	while (i < j)
	{
		while (i < j && a[j] > p)
		{
			j--;
		}
		while (i < j && a[i] <= p)
		{
			i++;
		}
		if (i<j)
		{
			tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;
		}
	}
	tmp = a[0];
	a[0] = a[j];
	a[j] = tmp;
}
void move2()
{
	int i = 0, j = n - 1;
	int p = a[0];
	while (i<j)
	{
		while (i<j && a[j]>p)
		{
			j--;
		}
		a[i] = a[j];
		i++;
		while (i<j && a[i]<=p)
		{
			i++;
		}
		a[j] = a[i];
		j--;
	}
	a[i] = p;
}
int main()
{
	move();
	for (int i = 0; i <  n; i++)
	{
		cout << a[i] << endl;
	}
	return 0;
}