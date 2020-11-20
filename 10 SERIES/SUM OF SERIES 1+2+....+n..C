#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
int n,i;
int sum=0;
clrscr();
printf("enter the n.i.e. max value of series");
scanf("%d",&n);
sum=(n*(n+1)/2);
printf("sum of the series");
for(i=0;i<=n;i++)
 if(i!=n)
 printf("%d +",i);
 else
 printf("%d=%d",i,sum);
 getch();
 return 0;
 }