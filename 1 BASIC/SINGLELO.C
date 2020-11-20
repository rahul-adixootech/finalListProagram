 #include<stdio.h>
 #include<conio.h>
 #include<string.h>
 void main()
 {
 char c,str[20];
 int i,length;
 clrscr();
 printf("Enter a string");
 scanf("%s",str);
 length=strlen(str);
 for(i=0;i<length/2;i++)
  {
  c=str[i];
  str[i]=str[length-1-i];
  str[length-1-i]=c;
  }
  printf("%s",str);
  getch();
 }