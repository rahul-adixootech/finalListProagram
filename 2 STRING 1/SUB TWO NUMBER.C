#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,sum;
clrscr();
printf("\nenter any two number");
scanf("%d%d",&a,&b);
sum=a+~b+1;
printf("diffrence of two integer %d",sum);
getch();
return 0;
}