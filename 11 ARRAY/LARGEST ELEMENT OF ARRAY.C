#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,max;
char a[100];
clrscr();
printf("enter a number");
scanf("%d",&n);
printf("enter array elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
max=a[0];
for(i=0;i<n;i++)
{
if(max<a[i])
max=a[i];
}
printf("\n%d",max);
getch();
return 0;
}