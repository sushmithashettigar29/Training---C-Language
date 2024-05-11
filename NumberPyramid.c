/*
Write a C program to accept one input ax and show the number pyramid as follows
   1
  121
 12321
and so on until the middle number is equal to ax
*/

#include<stdio.h>
void main()
{
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	for(int i=1;i<=num;i++)
	{
		//space
		for(int j=i;j<=num-1;j++)
		{
			printf("\t");
		}
		//number
		for(int j=1;j<=i;j++)
		{
			printf("%d\t",j);
		}
		//number
		for(int j= i-1;j>=1;j--)
		{
			printf("%d\t",j);
		}
		printf("\n");
	}
}
