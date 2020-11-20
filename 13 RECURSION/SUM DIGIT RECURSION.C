#include<stdio.h>
#include<conio.h>
int addnum(int num);
int main()
{
int num;
clrscr();
printf("enter a integer");
scanf("%d",&num);
printf("sum=%d",addnum(num));
getch();
return 0;
}
int addnum(int num)
{
int n;
if(num!=0)
return(num+addnum(num-1));
else
return 0;
}