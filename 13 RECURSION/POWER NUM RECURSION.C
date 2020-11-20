#include<stdio.h>
#include<conio.h>
int power(int,int);
int main()
{
int x,n;
clrscr();
printf("enter a number and power");
scanf("%d%d",&x,&n);
printf("reult: %d",power(x,n));
getch();
return 0;
}
int power(int base,int num)
{
if(num==0)
return 1;
else
return base*power(base,num-1);
}