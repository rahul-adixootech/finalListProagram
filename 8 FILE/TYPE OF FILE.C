#include<stdio.h>
#include<conio.h>
int main()
{
FILE *fp1, *fp2;
char c;
clrscr();
fp1=fopen("geeky.txt","r");
fp2=fopen("outgeeky.txt","w");
fscanf(fp1,"%c",&c);
fprintf(fp2,"%c",c);
getch();
return 0;
}