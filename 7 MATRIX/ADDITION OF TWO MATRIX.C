#include<stdio.h>
#include<conio.h>
int main()
{
int m,n,c,d,first[10][10],second[10][10],sum[10][10];
clrscr();
printf("enter the number of two rows and column of matrix \n");
scanf("%d%d",&m,&n);
printf("enter the elements of first matrix \n");
for(c=0;c<m;c++)
 for(d=0;d<n;d++)
  scanf("%d",&first[c][d]);
  printf("enter the elements of second matrix \n");
  for(c=0;c<m;c++)
   for(d=0;d<n;d++)
    scanf("%d",&second[c][d]);
    printf("sum of entered matrices:-\n");
    for(c=0;c<m;c++)
     {
       for(d=0;d<n;d++)
	{
	  sum[c][d]=first[c][d]+second[c][d];
	  printf("%d\t",sum[c][d]);
	}
	 printf("\n");
     } getch();
     return 0;
}

