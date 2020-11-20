#include<stdio.h>
#include<conio.h>
int main()
{
char s1[]="rajmahal";
char s2[]="tajmahal";
char ch;
int i=0;
clrscr();
printf("before swapping-\n");
printf("value of s1-%s \n",s1);
printf("value of s2-%s \n",s2);

 while(s1[i]!='\0')
 {
  ch=s1[i];
  s1[i]=s2[i];
  s2[i]=ch;
  i++;
 }
  printf("after swapping-\n");
  printf("value of s1-%s \n",s1);
  printf("value of s2-%s \n",s2);
  getch();
  return 0;
}
