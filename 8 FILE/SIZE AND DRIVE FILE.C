#include<stdio.h>
#include<time.h>
#include<sys\stat.h>
int main()
{
struct stat status;
FILE *fp;
clrscr();
fp=fopen("test.txt","r");
fstat(fileno (fp),&status);
printf("size of file : %d",status.st_size);
printf("drive name : %c",65+status.st_dev);
getch();
return 0;
}