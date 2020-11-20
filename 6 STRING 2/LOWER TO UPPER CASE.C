#include<stdio.h>
#include<conio.h>
int main()
{
char str[25];
int i;
clrscr();
printf("enter a string");
scanf("%s",str);
for(i=0;i<=strlen(str);i++)
{
if(str[i]>=97&&str[i]<=122)
str[i]=str[i]-32;
}
printf("\n upper case string is:%s",str);
getch();
return 0;
}