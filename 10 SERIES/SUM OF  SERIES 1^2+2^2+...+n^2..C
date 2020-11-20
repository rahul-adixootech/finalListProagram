#include<stdio.h>
#include<math.h>
int main()
{
int n,i;
int sum=0;
clrscr();
printf("enter the n.i.e. max value of series");
scanf("%d",&n);
sum=( n * ( n + 1 ) * ( 2 * n + 1 ) ) / 6;
printf("sum of the series");
for(i=1;i<=n;i++)
{
if(i!=n)
printf("%d^2+",i);
else
printf("%d^2=%d",i,sum);
}
getch();
return 0;
}
