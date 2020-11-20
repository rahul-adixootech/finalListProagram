#include<stdio.h>
#include<conio.h>
int main()
{
int a[100];
int i,n,position,value;
clrscr();
printf("enter number of elements in a \n");
scanf("%d",&n);
printf("enter %d element \n",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the location element \n");
scanf("%d",&position);
printf("enter the evalue to insert \n ");
scanf("%d",&value);
for(i=n-1;i>=position-1;i--)
a[i+1]=a[i];
a[position-1]=value;
printf("result value is \n");
for(i=0;i<=n;i++)
printf("%d\n",a[i]);
getch();
return 0;
}