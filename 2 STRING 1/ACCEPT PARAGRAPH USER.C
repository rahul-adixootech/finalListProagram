#include<stdio.h>
int main()
{
char para[100];
clrscr();
printf("enter paragraph:");
scanf("%[^\t]s",para);
printf("accepted paragraph : %s",para);
getch();
return 0;
}