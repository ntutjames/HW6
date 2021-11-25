#include<stdio.h>
#include<stdlib.h>
#define Size 5
void modifyarray(int b[], int size);
void modifyelement(int e);

int main()
{
	int a[Size] = { 0,1,2,3,4 };
	int i;
	printf("effect of passing entire array by reference: \n\nthe values of the original array are:\n");
	for (i = 0; i < Size; i++)
	{
		printf("%3d", a[i]);
	}
	printf("\n");
	modifyarray(a, Size);
	printf("the values of the modified array are: \n");
	for (i = 0; i < Size; i++)
	{
		printf("%3d", a[i]);
	}
	printf("\neffect of passing entire array element by value: \n\nthe values of the original a[3] is:%d\n",a[3]);
	modifyelement(a[3]);
	printf("the values of the modified a[3] is:%d\n",a[3]);
}
void modifyarray(int b[], int size)
{
	int j;
	for (j = 0; j < Size; j++)
	{
		 b[j] *= 2;
	}
}
void modifyelement(int e)
{
	printf("value in modifyelement is %d\n", e *= 2);
}
