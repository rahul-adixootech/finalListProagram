#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
clrscr();
printf("enter two number");
scanf("%d %d",&a,&b);
if(a<b)
c=a;
else
c=b;
printf("small number %d",c);
getch();
return 0;
}