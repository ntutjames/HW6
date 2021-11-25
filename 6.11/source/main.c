
#include<stdio.h>
#include<stdlib.h>
void bubble_sort(int arr[], int n);
int main()
{
	int i,j,tmp;
	int n[7] = { 0,9,2,8,4,5,6 };
	printf("original array of numbers:\n");
	for(i=0;i<=6;i++)
	{
		printf("%d ", n[i]);
	}
	printf("\nnew array of numbers:\n");
	bubble_sort(n, 7);
	
	for (i = 0; i <= 6; i++)
	{
		printf("%d ", n[i]);
	}
}
void bubble_sort(int arr[], int n) 
{
		for (int i = 0; i < n; ++i) 
		{
			for (int j = 0; j < i; ++j) 
			{
				if (arr[j] > arr[i]) 
				{
					int temp = arr[j];
					arr[j] = arr[i];
					arr[i] = temp;
				}
			}
		}
	}