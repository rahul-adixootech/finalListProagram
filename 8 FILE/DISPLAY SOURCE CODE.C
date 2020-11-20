#include<stdio.h>
int main()
{
file *fp;
char c;
fp=fopen(_file_,"r");
do
{
cgetc(fp);
putchar(c);
}
while(c!=EOF);
fclose(fp);
return 0;
}