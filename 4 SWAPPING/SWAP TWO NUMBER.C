#include<stdio.h>
#include<conio.h>
int main()
{
int x,y,temp;
clrscr();
printf("enter a value of x");
scanf("%d",&x);
printf("enter a value of y");
scanf("%d",&y);
temp=x;
x=y;
y=temp;
printf("\n after swapping x=%d,y=%d",x,y);
getch();
return 0;
}