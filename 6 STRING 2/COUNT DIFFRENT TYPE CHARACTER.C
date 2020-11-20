#include<stdio.h>
#include<conio.h>
int main()
{
char string[100];
int count[26]={0},c=0;
clrscr();
printf("input a string \n");
gets(string);
printf("character count \n");
for(c=0;c<26;c++)
printf("%c\t %c\n",c+'a',count[c]);
getch();
return 0;
}

