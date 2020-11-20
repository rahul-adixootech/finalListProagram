#include<stdio.h>
#include<conio.h>
int main()
{
int x,y,z,large;
clrscr();
printf("enter any three integer numbers for  x,y,z");
scanf("%d%d%d",&x,&y,&z);
large=x>y?(x>z?:z):(y>z?y:z);
printf("\n large number %d",large);
getch();
return 0;
}