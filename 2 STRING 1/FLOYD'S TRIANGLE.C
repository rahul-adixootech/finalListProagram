#include<stdio.h>
#include<conio.h>
int main()
{
int n,i,c,a=1;
clrscr();
printf("enter the number of rows of floyds triangle to print\n: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(c=1;c<=i;c++)
printf("\n%d",a);
a++;
}
printf("\n");
getch();
return 0;
}