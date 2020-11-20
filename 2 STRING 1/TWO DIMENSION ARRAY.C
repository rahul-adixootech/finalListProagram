#include<stdio.h>
#include<conio.h>
void displayNumbers(int num[2][2]);
int main()
{
int i,j,num[2][2];
printf("enter 4 number:\n");
for(i=0;i<=2;i++)
for(j=0;j<=2;j++)
scanf("%d",&num[i][j]);
displayNumbers(num);
return 0;
}
void displayNumbers(int num[2][2]);
{
printf("displaying:\n");
for( i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%d\n",num[i][j]);
getch();
}
}
}

