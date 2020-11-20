#include<stdio.h>
#include<conio.h>
int main()
{
long int decimalnum,rem,quotient;
int i=1,j,temp;
clrscr();
char hexadecimalnum[100];
printf("enter any decimalnum");
scanf("%d",&decimalnum);
quotient=decimalnum;
while(quotient!=0)
{
temp=quotient%16; //to connect integer into character
if(temp<10)
temp=temp+48;
else
hexadecimalnum[i++]=temp;
quotient=quotient/16;
}
printf("equivalent hexadecimal value of decimal num %d,decimal num");
for(j=1;j>0;j--)
printf("%c",hexadecimalnum[j]);
getch();
return 0;
}