#include<stdio.h>
#include<conio.h>
int main()
{
long int binaryval,hexadecimalval=0,i=1,rem;
clrscr();
printf("enter the binary number");
scanf("%ld",&binaryval);
while(binaryval!=0)
{
rem=binaryval%10;
hexadecimalval=hexadecimalval+rem*i;
i=i*2;
binaryval=binaryval/10;
}
printf("equivalent hexadecimal value:%lx",hexadecimalval);
getch();
return 0;
}