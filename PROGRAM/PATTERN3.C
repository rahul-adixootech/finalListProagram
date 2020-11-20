 void main()
{
int i,j,n,k=0;
clrscr();
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
if(j<=i)
printf("%d",++k);
else
printf(" ");
}
printf("\n");
}
getch();
}