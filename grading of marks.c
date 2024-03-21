// Gradding system of a class?
#include<stdio.h>
int main()
{
int mark;
printf("enter mark/n");
scanf("%d",&mark);
if (mark>=90&&mark<=100)
printf("O grade");
else if (mark>=80&&mark>=89)
printf("E grade");
else if (mark>=70&&mark<=79)
printf("A grade");
else if (mark>=60&&mark<=69)
printf("B grade");
else if (mark>=50&&mark<=59)
printf("C grade");
else if(mark>=40&&mark<=49)
printf("D grade");
else
printf("FAIL");
}