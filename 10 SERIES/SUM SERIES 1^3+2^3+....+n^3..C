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
printf("sum of the series");
for(i=0;i<=n;i++)
 {
 sum+=i;
 }
 printf("%d",sum);
 getch();
 return 0;
 }