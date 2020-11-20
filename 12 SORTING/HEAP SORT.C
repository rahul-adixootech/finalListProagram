#include<stdio.h>
#include<conio.h>
void swap(int *a,int *b)
{
 int temp=*a;
 *a=*b;
 *b=temp;
}
 void heapify(int a[],int n,int i)
{
 int largest=i;
 int left=2*i+1;
 int right=2*i+2;
 if(left<n && a[left] > a[largest])
 largest=left;
 if(right<n && a[right] > a[largest])
 largest=right;
 if(largest!=i)
 {
 swap(&a[i],&a[largest]);
 heapify(a,n,largest);
 }
}
 int i,j;
 void heapsort(int a[],int n)
{
  for(i=n/2-1;i>=0;i--)
  heapify(a,n,i);
  for(i=n-1;i>=0;i--)
 {
  swap(&a[0],&a[i]);
  heapify(a,i,0);
 }
}
void print_array(int a[],int n)
 {
  for(i=0;i<n;i++)
  printf("%d",a[i]);
  printf("\n");
 }
  int main()
   {
    int a[]={1,12,9,5,6,10};
    int n=sizeof(a)/sizeof(a[0]);
    clrscr();
    heapsort(a,n);
    printf("sorted array is \n");
    print_array(a,n);
    getch();
    return 0;
  }


















