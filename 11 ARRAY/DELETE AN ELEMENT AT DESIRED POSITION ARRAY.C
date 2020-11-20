#include<stdio.h>
#include<conio.h>
int main()
{
int a[30];
int i,n,pos;
clrscr();
printf("\n enter no of element");
scanf("%d",&n);
printf("\n enter %d element:",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\n location of the element to be deleted");
scanf("%d",&pos);
while(pos<n)
{
a[pos-1]=a[pos];
pos++;
}
n--;
for(i=0;i<n;i++)
printf("\n %d",a[i]);
getch ();
return 0;
}