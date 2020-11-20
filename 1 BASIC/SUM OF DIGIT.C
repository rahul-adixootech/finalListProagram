#include<stdio.h>
#include<conio.h>
int main()
{
int n,x,sum=0,rem;
clrscr();
printf("enter a number");
scanf("%d",&n);
x=n;
while(x!=0)
{
rem=x%10;
sum=sum+rem;
x=x/10;
}
printf("sum of digit number %d =% d",n,sum);
getch();
return 0;
}