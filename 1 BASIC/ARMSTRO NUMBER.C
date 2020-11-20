 #include<stdio.h>
 #include<conio.h>
 int main()
 {
 int x,num,rem,sum;
 clrscr();
 printf("enter a number");
 scanf("%d",&num);
 x=num;
 while(num!=0)
 {
 rem=num%10;
 sum=sum+(rem*rem*rem);
 num=num/10;
 }
 if(x==num)
  printf("%d armstrong number",x);
 else
  printf("%d not a armstrong number",x);
 getch();
 return 0;
 }

