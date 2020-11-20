#include<stdio.h>
#include<conio.h>
int main()
{
int n,i,c=0;
clrscr();
printf("enter a number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 (n%i==0);
 {
 c++;
 }
}
if(c==2)
printf("prime number");
else
printf("not a prime number");
getch();
return 0;
}