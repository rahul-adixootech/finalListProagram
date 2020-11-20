#include<stdio.h>
#include<conio.h>
#define max 500
int main()
{
char password[max];
char p;
int i=0;
clrscr();
printf("enter the password");
while((p=getch())!=13)
{
password[i++]=p;
printf("*");
}
password[i]='\0';
if(i<6)
printf("\n weak password");
printf("\n you have interd %s",password);
getch();
return 0;
}