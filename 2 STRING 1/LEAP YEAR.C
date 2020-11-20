#include<stdio.h>
#include<conio.h>
int main()
{
int y;
clrscr();
printf("enter the year");
scanf("%d",&y);
if(y%4==0)
printf("it is leap year");
else
printf("it is not a leap year");
getch();
}