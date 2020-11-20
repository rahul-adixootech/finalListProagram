#include<stdio.h>
#include<conio.h>
int main()
{
int a[100];
int i,j,n,position,swap;
clrscr();
printf("enter number of element");
scanf("%d",&n);
printf("enter %d number",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n-1;i++)
{
position=i;
for(j=i+1;j<n;j++)
{
if(a[position]>a[j])
position=j;
}
if(position!=i)
{
swap=a[i];
a[i]=a[position];
a[position=swap];
}
}
printf("sorted array:n");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
getch ();
return 0;
}