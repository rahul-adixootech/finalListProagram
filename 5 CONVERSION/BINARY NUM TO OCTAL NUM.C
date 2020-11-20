#include<stdio.h>
#include<conio.h>
int main()
{
long int binarynum,octalnum=0,j=1,rem;
printf("enter the value for binary number:");
scanf("%ld",&binarynum);
while(binarynum!=0)
{
rem=binarynum%10;
octalnum=octalnum+rem*j;
j=j*2;
binarynum=binarynum/10;
}
printf("equivalent octal value:%lo",octalnum);
getch();
return 0;
}