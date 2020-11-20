#include<stdio.h>
#include<conio.h>
int main()
{
int n,r,ncr;
clrscr();
printf("enter any two number->");
scanf("%d %d",&n,&r);
ncr=fact(n)/(fact(r)*fact(n-r));
printf("the ncr factor %d and %d is %d",n,r,ncr);
return 0;
}
int fact (int n)
{
int i=1;
while(n!=0)
{
i=i*n;
n--;
}
getch();
return i;
}
