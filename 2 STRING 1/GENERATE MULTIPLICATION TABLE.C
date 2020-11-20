#include<stdio.h>
#include<conio.h>
int main()
{
int n,i;
clrscr();
printf("enter a integer");
scanf("%d",&n);
for(i=0;i<=10;i++)
printf("\n%d * %d = %d",n,i,n*i);
getch();
return 0;
}