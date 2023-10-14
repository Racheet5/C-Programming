# include<stdio.h>
int main()
{
int x,i,n,j;
printf("Enter the rows:");
scanf("%d",&n);

for(i=1;i<=n;i++)
 {x='A';
  for (j=0;j<i;j++,x++)
  {
   printf("%c",x);
  }printf("\n");
 }
return 0;
}
