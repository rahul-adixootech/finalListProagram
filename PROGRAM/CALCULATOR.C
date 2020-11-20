#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
int choice;
clrscr();
printf(" 1 for add \n 2 for sub \n 3 for multiplication \n 4 for division \n 5 for modulo");
printf("\n enter a choice");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("enter a first number");
scanf("%d",&a);
printf("enter a second number");
scanf("%d",&b);
c=a+b;
printf("%d",c);
break;
case 2:
printf("enter a first number");
scanf("%d",&a);
printf("enter a second number");
scanf("%d",&b);
c=a-b;
printf("%d",c);
break;
case 3:
printf("enter a first number");
scanf("%d",&a);
printf("enter a second number");
scanf("%d",&b);
c=a*b;
printf("%d",c);
break;
case 4:
printf("enter a first number");
scanf("%d",&a);
printf("enter a second number");
scanf("%d",&b);
c=a/b;
printf("%d",c);
break;
case 5:
printf("enter a first number");
scanf("%d",&a);
printf("enter a second number");
scanf("%d",&b);
c=a%b;
printf("%d",c);
break;
}
getch();
}