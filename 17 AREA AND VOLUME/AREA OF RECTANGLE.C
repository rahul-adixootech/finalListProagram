#include<stdio.h>
#include<conio.h>
int main()
{
int width,length,area;
clrscr();
printf("enter a width rectangle");
scanf("%d",&width);
printf("enter a lenghth rectangle");
scanf("%d",&length);
area=width*length;
printf("the area of rectangle %d",area);
getch();
return 0;
}