#include<stdio.h>
#include<conio.h>
int main()
{
long decimalnum,rem,quotient;
int octalnum[100],i=1,j;
clrscr();
printf("enter the decimal number");
scanf("%ld",&decimalnum);
quotient=decimalnum;
while(quotient!=0)
{
octalnum[i++]=quotient%8;
quotient=quotient/8;
}
printf("equivalent octal value of decimal no %d:",decimalnum);
for(j=i-1;j>0;j--)
printf("%d",octalnum[j]);
getch();
return 0;
}