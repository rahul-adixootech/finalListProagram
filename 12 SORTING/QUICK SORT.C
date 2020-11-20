#include<stdio.h>
#include<conio.h>
void swap(int *a,int *b)
{
int t=*a;
*a=*b;
*a=t;
}
int partition(int array[],int low,int high)
 {     int j;
  int pivot=array[high];
  int i=(low-1);
  for(j=low;j<high;j++)
   {
    if(array[j]<=pivot)
    {
     i++;
     swap(&array[i],&array[j]);
    }
   }
    swap(&array[i+1],&array[high]);
    return(i+1);
  }
   void quicksort(int array[],int low,int high)
   {
    if(low<high)
    {
     int pi=partition(array,low,high);
     quicksort(array,low,pi-1);
     quicksort(array,pi+1,high);
    }
   }
   void print_array(int array[],int size)
   {     int i;
    for(i=0;i<size;i++)
    {
     printf("%d",array[i]);
    }
     printf("\n");
   }
   int main()
   {
    int data[]={8,7,2,1,0,9,6};
    int n=sizeof(data)/sizeof(data[0]);
    clrscr();
    quicksort(data,0,n-1);
    printf("sorted array in ascending order:\n");
    print_array(data,n);
    getch();
    return 0;
   }


















