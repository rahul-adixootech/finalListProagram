#include<stdio.h>
#include<conio.h>
void main()
{
FILE *fp;
char ch;
int size=0;
clrscr();


fp=fopen("myFILE.txt","r");
if(fp==NULL)
{
printf("\nFILE unable to open...");
}
else
{
printf("\nFILE opened...");
}
fseek(fp,0,2);
size=ftell(fp);
printf("the size of given fileis: %d\n",size);
fclose(fp);
getch();
}