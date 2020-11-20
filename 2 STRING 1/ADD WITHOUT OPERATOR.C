#include<stdio.h>
#include<conio.h>
int main()
{
int a,b;
clrscr();
printf("enter a value of a & b");
scanf("%d%d",&a,&b);
while(a)
{
b++;
a--;
}
printf("sum of a & b is %d",b);
getch();
return 0;
}