#include<stdio.h>
int main()
{
 int a[10],b[10],c[10],i;
 printf("enter first array");
 for(i=0;i<10;i++)
 scanf("%d",&a[i]);
 printf("\n enter second array");
 for(i=0;i<10;i++)
 scanf("%d",&b[i]);
 printf("array before swapping");
 printf("\nfirst array");
 for(i=0;i<10;i++)
 {
   printf("%d",a[i]);
 }
   printf("\n second array");
   for(i=0;i<10;i++)
  {
    printf("%d",b[i]);
  }
    for(i=0;i<10;i++)
   {
      c[i]=a[i];
      a[i]=b[i];
      b[i]=c[i];
   }
    printf("\n array after swapping");
    printf("\n first array");
    for(i=0;i<10;i++)

    {
      printf("%d",a[i]);
    }

     printf("\n second array");
     for(i=0;i<10;i++)

     {
       printf("%d",b[i]);
     }
     return 0;
}















