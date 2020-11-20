#include<stdio.h>
#include<conio.h>
int main()
{
char ch,file_name[25];
FILE *fp;
clrscr();
printf("enter name of a file you wish to see \n");
gets(file_name);
fp=fopen(file_name,"r");
if(fp==NULL)
{
perror("error while opening the file \n");
exit(EXIT_FAILURE);
}
printf("the contents of %s file are: \n",file_name);
while((ch=fgetc(fp)!=EOF)
printf("%c",ch);
fclose(fp);
getch();
return 0;
}
