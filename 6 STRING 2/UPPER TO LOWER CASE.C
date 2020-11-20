#include<stdio.h>
#include<conio.h>
int main()
{
char str[25];
int i;
clrscr();
printf("enter the string:");
scanf("%s",str);
for(i=0;i<=strlen(str);i++)
{
if(str[i]>=65&&str[i]<=90)
str[i]=str[i]+32;
}
printf("\n lower case string is : %s",str);
getch();
return 0;
}