#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
double a,b,c,s,area;
clrscr();
printf("enter sides of a triangle \n");
scanf("%lf%lf%lf",&a,&b,&c);
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("area of the triangle =%.2lf\n",area);
getch();
return 0;
}