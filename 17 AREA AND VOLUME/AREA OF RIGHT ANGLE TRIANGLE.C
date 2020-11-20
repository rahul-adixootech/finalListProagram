  #include<stdio.h>
  #include<conio.h>
  int main()
  {
  int base,height;
  float area;
  clrscr();
  printf("enter the base of right angle triangle");
  scanf("%d",&base);
  printf("enter the height of right angle triangle");
  scanf("%d",&height);
  area=0.5*base*height;
  printf("area of right angle triangle : %f",area);
  getch();
  return 0;
  }
