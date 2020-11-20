#include<stdio.h>
#include<conio.h>
void main()
{
int num,binary_val,decimal_val=0,base=1,rem;
printf("enter a binary number(1s and 0s)");
scanf("%d",&num);
binary_val=num;
while(num>0)
{
rem=num%10;
decimal_val=decimal_val+rem*base;
base=base*2;
}
printf("the binary number is:%d",binary_val);
printf("the decimal equivalent is:%d",decimal_val);
getch();
}