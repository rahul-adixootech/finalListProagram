#include<stdio.h>
#include<conio.h>
int main()
{
 int status;
 char file_name[25];
 clrscr();
 printf("enter name of a file you wish to delete \n");
 gets(file_name);
 status=remove(file_name);
 if(status==0)
  printf("%s file deleted successfully.\n",file_name);
   else
    {
     printf("unable to deleted the file \n");
     perror("following error occurred");
    }
     getch();
     return 0;
 }

