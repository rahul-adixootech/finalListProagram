#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
float a,r,i,tn;
int n;
float sum=0;
clrscr();
printf("enter the first number of the G.P. series");
scanf("%f",&a);
printf("enter the total number of the G.P. series");
scanf("%d",&n);
printf("enter the common difference of the A.p. series");
scanf("%f",&r);
sum=(a*(1-pow(r,n+1)))/(1-r);
tn=a*(1-pow(r,n-1));
printf("tn term of G.P.: %f",tn);
printf("\n sum of the G.P.: %f",sum);
getch();
return 0;
}
