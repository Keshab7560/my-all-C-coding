//print the table of a number input by the user(up to 10 times)?
#include<stdio.h>
int main(){
	int n;
	printf("enter a number");
	scanf("%d",&n);
	for(int i=1;i<=10;i++){
		printf("%d\n",n*i);
	}return 0;
}