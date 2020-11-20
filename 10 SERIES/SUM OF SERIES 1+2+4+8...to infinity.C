#include<stdio.h>
#include<conio.h>
int main()
{
int n,i;
int sum=0;
clrscr();
printf("\n c program to print sum of series 2+4+6+8+....+n:\n\n");
printf("enter an even number n:");
scanf("%d",&n);
for(i=1;i<=n;i++)
 {
  i=i+1;
  if(n!=i)
  printf("%d +",i);
  else
  printf("%d",i);
  sum=sum+i;
 }
 printf("=%d",sum);
 getch();
 return 0;
}