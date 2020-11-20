#include<stdio.h>
#include<conio.h>
int main()
{
int a,b;
clrscr();
printf("enter the first number");
scanf("%d",&a);
printf("enter the second number");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("a= %d\n",a);
printf("b= %d",b);
getch();
}