#include<stdio.h>
#include<conio.h>
int main()
{
char a[20];
int i=0;
clrscr();
printf("enter a string");
scanf("%s",&a);
printf("%c",*a);
while(a[i]!='\0')
 {
  if(a[i]==' ')
   {
     i++;
      printf("%c",*(a+i));
   }
    i++;
 }
  getch();
  return 0;
}