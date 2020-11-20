#include<stdio.h>
#include<conio.h>
int main()
{
float radius,area;
clrscr();
printf("enter the radius of a circle \n");
scanf("%f",&radius);
area=3.14159*radius*radius;
printf("area of the circle=%2f\n",area);
getch();
return 0;
}