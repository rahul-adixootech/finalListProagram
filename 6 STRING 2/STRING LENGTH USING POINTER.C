#include<stdio.h>
#include<conio.h>
int main()
{
char a[100];
int length;
clrscr();
printf("enter a string to calculate its length \n");
scanf("%s",&a);
length=strlen(a);
printf("length of the string =%d\n",length);
getch();
return 0;
}