#include<stdio.h>
#include<conio.h>
int main()
{
int octalvalues[]={0,1,10,11,100,101,110,111};
long long octal,tempoctal,binary,place;
int rem;
clrscr();
printf("enter any octal number");
scanf("%lld",&octal);
tempoctal=octal;
binary=0;
place=1;
while(tempoctal>0)
{
rem=tempoctal % 10;
binary=(octalvalues[rem]*place)+binary;
tempoctal/=10;
place*=1000;
}
printf("octal number=%lld\n",octal);
printf("binary number=%lld",binary);
getch();
return 0;
}


