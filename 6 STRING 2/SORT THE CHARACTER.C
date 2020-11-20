#include<stdio.h>
#include<conio.h>
int main()
{
char string[]="rahulmahajanindore";
char temp;
int i,j;
int n=strlen(string);
clrscr();
printf("string before sorting - %s \n",string);
for(i=0;i<n-1;i++)
 {
  for (j=i+1;j<n;j++)
  {
   if(string[i]>string[j])
   {
    temp=string[i];
    string[i]=string[j];
    string[j]=temp;
   }
  }
 }
 printf("string after sorting - %s \n",string);
 getch();
 return 0;
}