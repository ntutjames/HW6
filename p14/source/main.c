#include<stdio.h>
#include<stdlib.h>
#define student 3
#define exam 4
int maxi(const int grade[][exam], int pupils, int test);
int mini(const int grade[][exam], int pupils, int test);
double avg(const int setofgrade[], int test);
void printarray(const int grade[][exam], int pupils, int test);
int main()
{
	int stu;
	const int stugrade[student][exam]=
	{{77, 68, 86, 73},
	{ 96,87,89,78 },
	{70,90,86,81}};
	printf("the array is:\n");
	printarray(stugrade, student, exam);
	printf("\n\nlowest grade: %d\nhighest grade:%d\n",
		mini(stugrade, student, exam), maxi(stugrade, student, exam));
		
	for (stu = 0; stu < student; stu++)
	{
		printf("the average grade for student %d is %.2f\n",stu, avg(stugrade[stu], exam));
	}
}
void printarray(const int grade[][exam], int pupils, int test)
{
	int i, j;
	printf("		[0]  [1]  [2]  [3]");
	for (i = 0; i < pupils; i++)
	{
		printf("\nstudentgrades[%d]", i);
		for (j = 0; j < test; j++)
			printf("%-5d", grade[i][j]);
	}
}
int mini(const int grade[][exam], int pupils, int test)
{
	int i, j;
	int low = 100;
	
	for (i = 0; i < pupils; i++)
	{
		for (j = 0; j < test; j++)
		{
			if (grade[i][j] < low)
			{
				low = grade[i][j];
			}
		}
	}
	return low;
}
int maxi(const int grade[][exam], int pupils, int test)
{
	int i, j;
	int high=0;
	for (i = 0; i < pupils; i++)
	{
		for (j = 0; j < test; j++)
		{
			if (grade[i][j] >high)
			{
				high = grade[i][j];
			}
		}
	}
	return high;
}
double avg(const int setofgrade[], int test)
{
	int i;
	int total = 0;
	for (i = 0; i < test; i++)
	{
		total += setofgrade[i];
	}
	return (double)total / test;
}
