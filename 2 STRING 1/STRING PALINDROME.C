#include<stdio.h>                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         #include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char s[100];
int i,n,c=0;
clrscr();
printf("enter a string");
scanf("%s",s);
n=strlen(s);
for(i=0;i<=n/2;i++)
{
if(s[i]==s[n-i-1])
c++;
}
if(c==i)
printf("palindrome num");
else
printf("not a palindrome num");
getch();
return 0;
}
