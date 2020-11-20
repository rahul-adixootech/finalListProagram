#include<stdio.h>
#include<conio.h>
int main()
{
char a[100],b[100];
clrscr();
printf("enter the first string \n");
scanf("%s",&a);
printf("enter the second string\n");
scanf("%s",&b);
strcat(a,b);
printf("string on concatenation: %s\n",a);
  getch();
  return 0;
 }