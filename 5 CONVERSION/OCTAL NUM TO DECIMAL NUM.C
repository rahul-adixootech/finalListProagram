#include<stdio.h>
#include<conio.h>
int main()
{
long int octal,decimal=0;
int i=0;
clrscr();
printf("enter any octal number:");
scanf("%ld",&octal);
while(octal!=0)
{
decimal=decimal+(octal%10)*pow(8,i++);
octal=octal/10;
}
printf("equivalent decimal value:",decimal);
getch();
return 0;
}