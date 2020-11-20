#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,n,temp;
char a[100];
clrscr();
printf("enter a number");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
 {
  for(j=i+1;j<n;j++)
  {
   if(a[i]>a[j])
   {
    temp=a[j];
    a[j]=a[i];
    a[i]=temp;
   }
  }
 }
 printf("%d",a[n-2]);
 getch();
 return 0;
}