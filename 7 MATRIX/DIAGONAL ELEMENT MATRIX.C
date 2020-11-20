#include<stdio.h>
#include<conio.h>
int main()
{
 int i,j,rows,columns,a[10][10],sum=0;
 clrscr();
 printf("\n please enter number of rows and colomn:");
 scanf("%d%d",&i,&j);
 printf("\n please enter the matrix elements \n");
 for(rows=0;rows<i;rows++)
  {
   for(columns=0;columns<j;columns++)
   {
    scanf("%d",&a[rows][columns]);
   }
  }
   for(rows=0;rows<i;rows++)
    {
     sum=sum+a[rows][rows];
    }
     printf("\n the sum of diagonal elements of a matrix=\n%d",sum);
     getch();
     return 0;
}