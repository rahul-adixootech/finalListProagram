#include<stdio.h>
int main()
{
int i;
clrscr();
for(i=0;i<=255;i++)
{
printf("ascii value of character %c = %c\n",i,i);
}
getch();
return 0;
}