#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
clrscr();
printf("enter three number");
scanf("%d%d%d",&a,&b,&c);
if(a-b>0 && a-c>0)
printf("greatest is a %d",a);
else
if(b-c>0)
{
printf("greatest is b %d",b);
}
else
{
printf("greatest is c %d",c);
}
getch();
return 0;
}