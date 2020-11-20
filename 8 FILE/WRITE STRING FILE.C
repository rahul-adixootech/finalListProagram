#include<stdio.h>
#include<conio.h>
int main()
{
char sentence[1000];
clrscr();
file*fptr;
fptr=fopen("program.txt","w");
if(fptr==null)
{
printf("error!");
exit(1);
}
printf("enter a sentences: \n");
fgets(sentence,sizeof(sentence),stdin);
fprintf(fptr,"%s",sentence);
fclose(fptr);
getch();
return 0;
}