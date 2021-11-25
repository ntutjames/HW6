#pragma warning(disable : 4996) 
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char str1[20];
	char str2[] = "string literal";
	int i;
	printf("enter a string:");
	scanf("%s", str1);
	printf("string1 is:%s\nstring2 is:%s\n"
		"string1 with space between characters is:\n", str1, str2);
	for (i = 0; str1[i] != '\0'; i++)
		printf("%c ", str1[i]);
	printf("\n");
}