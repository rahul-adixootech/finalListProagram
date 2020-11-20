#include<stdio.h>
#include<conio.h>
int main()
{
int a[100];
int i,j,num,temp;
clrscr();
printf("\n please enter the total number of element");
scanf("%d",&num);
printf("\n please enter the array element");
for(i=0;i<num;i++)
scanf("%d",&a[i]);
for(i=1;i<=num-1;i++)
{
for(j=i;j>0 && a[j-1]>a[j];j--)
 {
  temp=a[j];
  a[j]=a[j-1];
  a[j-1]=temp;
 }
}
printf("\n insertion sort result");
for(i=0;i<num;i++)
{
printf("%d \t",a[i]);
}
printf("\n");
getch ();
return 0;
}