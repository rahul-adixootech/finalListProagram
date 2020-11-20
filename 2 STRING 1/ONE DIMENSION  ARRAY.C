#include<stdio.h>
#include<conio.h>
void display(int age1,int age2)
{
clrscr();
printf("%d\n",age1);
printf("%d\n",age2);
}
int main()
{
int agearray[]={12,8,4,12};
display(agearray[1],agearray[2]);
getch();
return 0;
}