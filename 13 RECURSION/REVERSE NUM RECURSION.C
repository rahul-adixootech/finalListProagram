#include<stdio.h>
#include<conio.h>
int main()
{
int num,reverse_number;
clrscr();
printf("\n enter any number");
scanf("%d",&num);
reverse_number=reverse_function(num);
printf("\n after reverse the no is:%d",reverse_number);
getch();
return 0;
}
  int sum=0,rem;
  reverse_function(int num)
 {
  if(num)
   {
     rem=num%10;
     sum=sum*10+rem;
     reverse_function(num/10);
   }
     else
     return sum;
     return sum;
  }