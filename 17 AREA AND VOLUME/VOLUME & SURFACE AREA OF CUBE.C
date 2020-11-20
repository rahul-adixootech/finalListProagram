#include<stdio.h>
#include<conio.h>
int main()
{
float a;
float surface_area,volume;
clrscr();
printf("enter size of any side of a cube:");
scanf("%f",&a);
surface_area=6*(a*a);
volume=a*a*a;
printf("suface area of cube is %.3f",surface_area);
printf("\n volume of cube is :%.3f",volume);
getch();
return 0;
}