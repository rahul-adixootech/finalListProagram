#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,add,sub;
clrscr();
printf("enter two integer \n");
scanf("%d %d",&a,&b);
add=a+b;
sub=a-b;
printf("sum = %d \n",add);
printf("diffrence = %d \n",sub);
getch();
return 0;
}