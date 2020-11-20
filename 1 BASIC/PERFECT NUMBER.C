#include<stdio.h>
#include<conio.h>
int main()
{
int n,i=1,sum=0;
clrscr();
printf("enter a number");
scanf("%d",&n);
while(i<n)
{
if(n%i==0)
sum=sum+i;
i++;
}
if(sum==n)
printf("%d perfect number",i);
else
printf("%d not a perfect number",i);
getch();
return;
}