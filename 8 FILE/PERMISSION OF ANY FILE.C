#include<stdio.h>
#include<sys\stat.h>
#include<time.h>
void main()
{
struct stat status;
FILE *fp;
stat("test.txt",&status);
clrscr();
if(status.st_mode & S_IREAD)
printf("you have read permission.\n");
if(status.st_mode & S_IWRITE)
printf("you have write permission.");
getch();
}