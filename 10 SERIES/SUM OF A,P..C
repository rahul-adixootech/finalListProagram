#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
int a,d,n,i,tn;
int sum=0;
clrscr();
printf("enter the first number of the A.p. series");
scanf("%d",&a);
printf("enter the total number of the A.p. series");
scanf("%d",&n);
printf("enter the common difference of the A.p. series");
scanf("%d",&d);
sum=(n*(2*a+(n-1)*d))/2;
tn=a+(n-1)*d;
printf("sum of the series A.P.:");
for(i=a;i<=tn;i= i+d)
{
if(i!=tn)
printf("%d +",i);
else
printf("%d=%d",i,sum);
getch();
}
return 0;
}
