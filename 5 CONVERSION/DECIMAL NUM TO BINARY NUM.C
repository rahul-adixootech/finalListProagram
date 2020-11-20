#include<stdio.h>
#include<conio.h>
int main()
{
int n,c,k;
clrscr();
printf("enter an integer in decimal number system");
scanf("%d"&n);
printf("%d in binary number system is:",n);
for(c=31;c>0;c--)
{
k=n>>s;
if(k&1)
printf("1");
else
printf("0");
}
printf("/n");
getch();
return 0;
}