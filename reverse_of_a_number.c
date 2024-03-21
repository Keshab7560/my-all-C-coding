
//write a program to findout the reverse of a number?
#include<stdio.h>
int main(){
	int n,r=0;
	printf("enter a number\n");
	scanf("%d",&n);
	while(n !=0){
	r=r*10;
	r=r+n%10;
	n=n/10;
	}printf("reverse number is:%d",r);
	return 0;
}
