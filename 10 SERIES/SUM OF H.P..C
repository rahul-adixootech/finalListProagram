#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
int n;
float i,sum,t;
clrscr();
printf("1+1/2+1/3+......+1/n\n");
printf("enter the value of n\n");
scanf("%d",&n);
sum=0;
for(i=1;i<=n;i++)
 {
  t=1/i;
  sum=sum+t;
 }
 printf("%f",sum);
 getch();
 return 0;
}
