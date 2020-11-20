#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,num,isprime;
clrscr();
printf("enter a number");
scanf("%d",&num);
for(i=2;i<=num;i++)
{
if(num%i==0)
{
isprime=i;
for(j=2;j<=i/2;j++)
{
if(i%j==0)
{
isprime=0;
break;
}
}
if(isprime==1)
{
printf("%d is a prime factor",i);
getch();
}
}
}return 0;
}
