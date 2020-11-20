#include<stdio.h>
#include<conio.h>
int main()
{
char *hexdigittobinary[16];
char hexdigits[16];
char hexadecimal[30],binarynum[100];
int i=0,j,index=0;
clrscr();
printf("enter a hexadecimal number\n");
scanf("%s",hexadecimal);
for(i=0;hexadecimal[i]!='\0';i++)
 {
   for(j=0;j<16;j++)
    {
      if(hexadecimal[i]==hexdigits[j])
       {
	 strcat(binarynum,hexdigittobinary[j]);
       }
    }
 }
   printf("binary number : %s",binarynum);
   getch();
   return 0;
}
