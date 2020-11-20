#include<stdio.h>
#include<conio.h>
int main()
{
int n,i,a=0,b=1,c;
clrscr();
printf("enter a number");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
c=a+b;
printf("%d",c);
a=b;
b=c;
}
getch();
return 0;
}