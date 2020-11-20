#include<stdio.h>
#include<conio.h>
struct student
{
int roll;
char name[100];
float marks;
};
 int main()
 {
  struct student *ptr=0;
  clrscr();
  ptr++;
  printf("size of the structure: %d",ptr);
  getch();
  return 0;
 }