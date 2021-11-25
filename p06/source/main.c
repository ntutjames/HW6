#include <stdio.h>
#include <stdlib.h>
#define size 10
int main()
{
	int s[size];
	int i;
	for (i = 0; i < size; i++)
	{
		s[i] = 2+2*i;
	}
	printf("%s%13s\n", "element", "value");
	for (i = 0; i < 10; i++)
	{
		printf("%7d%13d\n", i, s[i]);
	}

}