#include<stdio.h>
#include<conio.h>
int main()
 {
   int n1,n2;
   clrscr();
   printf("enter two positive integers:");
   scanf("%d%d",&n1,&n2);
   while(n1!=n2)
   {
     if(n1>n2)
     n1-=n2;
     else
     n2-=n1;
   }

    printf("gcd=%d",n1);
    getch();
    return 0;
 }