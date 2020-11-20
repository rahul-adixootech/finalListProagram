#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,k,size;
char a[100];
clrscr();
printf("array size");
scanf("%d",&size);
printf("enter a number");
for(i=0;i<size;i++)
scanf("%d",&a[i]);
printf("original number");
for(i=0;i<size;i++)
 {
  for(j=i+1;j<size;j++)
  {
   if(a[j]==a[i])
   {
    for(k=j;k<size;k++)
    {
     a[k]=a[k+1];
     }
     size--;
     }
     j++;
     }
     }
     for(i=0;i<size;i++)
     printf("%d",a[i]);
     getch();
     return 0;
     }

