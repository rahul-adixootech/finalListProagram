#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d=0;
float x1,x2;
clrscr();
printf("input the of a,b & c:");
scanf("%d%d%d",&a,&b,&c);
d=b*b-4*a*c;
if(d==0)
{
printf("both root are equal.");
x1=-b/(2.0*a);
x2=x1;
printf("first root root1=%f\n",x1);
printf("first root root2=%f\n",x2);
}
else if(d>0)
printf("both roots are real and diff-2\n");
x1=(-b+sqrt(d))/(2*a);
x2=(-b-sqrt(d))/(2*a);
printf("first root root1=%f\n",x1);
printf("second root root2=%f\n",x2);
printf("root are imeginary;\n nosolution.\n");
getch();
}