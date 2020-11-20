#include<stdio.h>
#include<conio.h>
void main()
{
int n,c=1,blk,i,j;
clrscr();
printf("input a number of rows");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
for(blk=1;blk<=n-i;blk++)
printf(" ");
for(j=0;j<=i;j++)
{
if(j==0||i==0)
c=1;
else
c=c*(i-j+1);
printf("%d",c);
}
printf("\n");
getch();
}
}