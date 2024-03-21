//write aprogram to check if the given number is a natural number.
#include<stdio.h>
int main()
{
	int num;
	printf("enter a number\n");
	scanf("%d",&num);
	if(num >= 1)
    {
	  printf("NATURAL NUMBER\n");
	}
	else
    {
	  printf("NOT A  NATURAL NUMBER\n");
    }
}