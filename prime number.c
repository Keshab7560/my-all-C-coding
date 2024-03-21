//wap to check a number is prime or not?
#include<stdio.h>
int main()
{
 int flag=0,i,num;
 printf("enter a number");
 scanf("%d",&num);
 for (i=2;i<=num/2;i++)
 {
  if(num%i==0)
  {
   flag=1;
   break;
  }
 }
 if(flag==0)
 printf("the number is not prime number");
 else
 printf("the number is prime number");
}
