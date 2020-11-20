#include<stdio.h>
#include<conio.h>
int main()
{
int num1,num2,maxvalue;
clrscr();
printf("enter two number:");
scanf("%d %d",&num1,&num2);
maxvalue=(num1>num2)? num1:num2;
while(1)
{
if((maxvalue%num1==0)&&(maxvalue%num2==0))
{
printf("lcm:%d",maxvalue);
break;
}
++maxvalue;
}
getch();
return 0;
}