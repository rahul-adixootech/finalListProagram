#include<stdio.h>
#include<conio.h>
union student
{
int roll;
char name[100];
float marks;
};
 int main()
 {
  union student *ptr=0;
  clrscr();
  ptr++;
  printf("size of the structure: %d",ptr);
  getch();
  return 0;
 }