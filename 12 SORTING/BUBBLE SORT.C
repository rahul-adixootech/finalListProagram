#include<stdio.h>
#include<conio.h>
int main()
{
int a[100];
int i,j,n,swap;
clrscr();
printf("enter number of element");
scanf("%d",&n);
printf("enter %d number n:",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n-1;i++)
{
 for(j=0;j<n;j++)
 {
  if(a[j]>a[j+1])
  {
   swap=a[j];
   a[j]=a[j+1];
   a[j+1]=swap;
  }
 }
}
printf("sorted a");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
getch();
return 0;
}