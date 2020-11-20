#include<stdio.h>
#include<time.h>
#include<sys\stat.h>
int main()
{
struct stat status;
FILE *fp;
clrscr();
fp=fopen("test.txt","r");
fstat(fileno(fp),&status);
printf("last date of modification : %s",ctime(&status.st_ctime));
getch();
return 0;
}