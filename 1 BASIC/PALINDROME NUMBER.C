#include<stdio.h>
#include<conio.h>
int main()
{
int n,rev=0,rem,originalnum;
clrscr();
printf("enter a number");
scanf("%d",&n);
originalnum=n;
while(n!=0)
{
rem=n%10;
rev=rev*10+rem;
n/=10;
}
if(originalnum==rev)
printf("%d is a palindrome",originalnum);
else
printf("%d is a not a palindrome",originalnum);
getch();
return 0;
}