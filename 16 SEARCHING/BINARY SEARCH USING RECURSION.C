#include<stdio.h>
#include<conio.h>
int binary_search(int [],int,int,int);
int main()
{
int c,first,last,n,search,array[100],index;
printf("enter number of elements \n");
scanf("%d",&n);
printf("enter %d integers \n",n);
for(c=0;c<n;c++)
scanf("%d",&array[c]);
printf("enter value to find \n");
scanf("%d",&search);
first=0;
last=n-1;
index=binary_search(array,first,last,search);
if(index==-1)
printf("not found! %d isn't present in the list.\n",search);
else
printf("%d is present at location %d \n",search,index+1);
return 0;
}
int binary_search(int a[],int s,int e,int f)
{
int m;
if(s>e)
return -1;
m=(s+e)/2;
if(a[m]==f)
return m;
else if(f>a[m])
return binary_serach(a,m+1,e,f);
else
return binary_search(a,s,m-1,f);
}