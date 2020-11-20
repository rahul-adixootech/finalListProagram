#include<stdio.h>
#include<conio.h>
int main()
{
 char str[25];
 int i,j;
 printf("enter any string:");
 scanf("%s",str);
 printf("\n the string is :%s",str);
 for(i=0;i<strlen(str);i++)
  {
   if (str[i]!='a'&& str[i]!='e'&& str[i]!='i'&& str[i]!='o'&& str[i]!='u')
   {

    for(j=1;j<strlen(str);j++)

      {
	str[j]=str[j+1];
      }
   }     i--;

  }
  printf("\n\n rest of the string is: %s",str);
  getch();
  return 0;
}
