#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
float radius,height;
float surface_area,volume;
clrscr();
printf("enter value of radius and height of a cone :\n ");
scanf("%f%f",&radius,&height);
surface_area=(22/7)*radius*(radius+sqrt(radius*radius+height*height));
volume=(1.0/3)*(22/7)*radius*radius*height;
printf("surface area of cone is : %.3f",surface_area);
printf("\n volume of cone is : %.3f",volume);
getch();
return 0;
}