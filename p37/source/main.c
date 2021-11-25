#include<stdio.h>
#include<stdlib.h>
#define Size 100

int linear(const int array[], int key, int size);
int main()
{
	int a[Size];
	int x;
	int searchkey;
	int element;
	for (x = 0; x < Size; x++)
	{
		a[x] = 2 * x;
	}
	printf("enter integer search key:\n");
	scanf_s("%d", &searchkey);
	element = linear(a, searchkey, Size);
	if (element!= 1)
	{
		printf("found value in element %d\n", element);
	}
	else
	{
		printf("value not found\n");
	}
}
int linear(const int array[], int key, int size)
{
	int n;
	for (n = 0; n < Size; n++)
	{
		if (array[n] == key)
		{
			return n;
		}
	}
	return -1;
}

