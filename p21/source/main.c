#include<stdio.h>
#include<stdlib.h>
void arraytinit(void);
void autoarrayinit(void);
void arraytinit(void)
{
	static int array0[3];
	int i;
	printf("\nvalues on entering staticarrayinit:\n");
	for (i = 0; i <= 2; i++)
		printf("array0[%d]=%d ",i,array0[i]);
	printf("\nvalues on exiting staticarrayinit:\n");
	for (i = 0; i <= 2; i++)
		printf("array0[%d]=%d ", i, array0[i]+=5);
}
void autoarrayinit(void)
{
	int array1[3] = { 1,2,3 };
	int i;
	printf("\nvalues on entering autoarrayinit:\n");
	for (i = 0; i <= 2; i++)
		printf("array1[%d]=%d ", i, array1[i]);
	printf("\nvalues on exiting staticarrayinit:\n");
	for (i = 0; i <= 2; i++)
		printf("array1[%d]=%d ", i, array1[i] += 5);
}
int main()
{
	printf("first call each function:\n");
	arraytinit();
	autoarrayinit();
	printf("\n\nsecond call to each function:\n");
	arraytinit();
	autoarrayinit();
	printf("\n");
}
