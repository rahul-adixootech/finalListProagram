#include<stdio.h>
#include<conio.h>
int main()
{
int num=0;
char hex[100];
char hexdigit;
int i=0;
int len;
clrscr();
printf("enter hexadecimal num");
scanf("%s",hex);
len=strlen(hex);
for(i=0;i<len;i++)
{
hexdigit=hex[len-i-1];
if(hexdigit>='0'&&hexdigit<='9')
num+=(hexdigit-'0')*pow(16,i);
else
num+=(hexdigit-'a'+10)*pow(16,i);
}
printf("perimal number:%d",num);
getch();
return 0;
}