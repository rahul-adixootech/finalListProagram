#include<stdio.h>
#include<conio.h>
int main()
{
int i=1,base,exponent,result=1;
clrscr();
printf("enter a base");
scanf("%d",&base);
printf("enter a exponent");
scanf("%d",&exponent);
while(i<=exponent)
{
result*=base;
i++;
}
printf("%d ^ %d = %d",base,exponent,result);
getch();
return 0;
}