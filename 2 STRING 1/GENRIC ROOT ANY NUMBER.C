#include<stdio.h>
#include<conio.h>
int main()
{
int num,sum,rem;
clrscr();
printf("enter a number");
scanf("%d",&num);
while(num>10)
{
sum=0;
while(num)
{
rem=num%10;
num=num/10;
sum+=rem;
}
break;
}
printf("sum of the digit in single digit is %d",sum);
getch();
return 0;
}