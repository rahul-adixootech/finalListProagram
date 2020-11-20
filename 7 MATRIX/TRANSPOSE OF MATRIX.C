#include<stdio.h>
#include<conio.h>
int main()
{
int m,n,c,d,matrix[10][10],transpose[10][10];
clrscr();
printf("enter the number of rows and column of a matrix \n");
scanf("%d%d",&m,&n);
printf("enter elements of the matrix \n");
for(c=0;c<m;c++)
for(d=0;d<n;d++)
scanf("%d",&matrix[c][d]);
 for(c=0;c<m;c++)
 for(d=0;d<n;d++)
 transpose[d][c]=matrix[c][d];
 printf("transpose of the matrix:\n");
 for(c=0;c<n;c++)
  {
   for(d=0;d<m;d++)
   printf("%d\t",transpose[c][d]);
   printf("\n");
  }
  getch();
  return 0;
}