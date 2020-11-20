#include<stdio.h>
#include<conio.h>
int main()
{
FILE*p;
int i,a[10];
clrscr();
if((p=fopen("myfile.dat","wb"))==NULL)
 {
   printf("\n unable to open file myfile.dat");
   exit(1);
 }
  printf("\n enter ten values,one value on each line \n");
  for(i=0;i<10;i++)
  scanf("%d",&a[i]);
  fwrite(a,sizeof(a),1,p);
  fclose(p);
  getch();
  return 0;
}