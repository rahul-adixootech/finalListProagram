#include<stdio.h>
#include<conio.h>
void shellsort(int a[],int num)
{
int i,j,k,temp;
for(i=num/2;i>0;i=i/2)
 {
  for(j=i;j<num;j++)
  {
   for(k=j-i;k>=0;k=k-i)
   {
    if(a[k+i]>=a[k])
     break;
    else
    {
     temp=a[k];
     a[k]=a[k+i];
     a[k+i]=temp;
    }
   }
  }
 }
}
int main()
{
int a[30];
int k,num;
clrscr();
printf("enter total no.of elements:");
scanf("%d",&num);
printf("\n enter %d numbers:",num);
for(k=0;k<num;k++)
 {
 scanf("%d",&a[k]);
 }
 shellsort(a,num);
 printf("\n sorted array is:");
 for(k=0;k<num;k++)
 printf("%d",a[k]);
 getch();
 return 0;
}
