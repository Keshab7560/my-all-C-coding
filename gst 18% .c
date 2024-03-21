//three cost with gst(18%)?
#include<stdio.h>
int main(){
   float price[3];
	printf("enter three prices:");
	scanf("%f %f %f",&price[0],&price[1],&price[2]);
	printf("total price 1: %f\n",price[0]+(0.18*price[0]));
	printf("total price 2: %f\n" ,price[1]+(0.18*price[1]));
	printf("total price 3: %f\n",price[2]+(0.18*price[2]));
}