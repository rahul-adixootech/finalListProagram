#include<stdio.h>
#include<conio.h>
int main()
{
float a,b,h;
float area;
clrscr();
printf("enter the value for two bases & height of the trapezium: \n");
scanf("%f%f%f",&a,&b,&h);
area=0.5*(a+b)*h;
printf("area of the trapezium is : %3f",area);
getch();
return 0;
}