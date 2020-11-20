#include<stdio.h>
#include<conio.h>
int main()
{
int num,i;
long int fact;
clrscr();
printf("enter a integer");
scanf("%d",&num);
fact=1;
for(i=num;i>=1;i--)
fact=fact*i;
printf("factorial of %d is = %d",num,fact);
getch();
return 0;
}