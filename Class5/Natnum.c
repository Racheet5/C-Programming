# include<stdio.h>
int main()
{
  int i,n,c;
printf("Enter the limit:");
scanf("%d",&n);
printf("Enter a choice:");
scanf("%d",&c);
if (c==1)
 {
for (i=1;i<=n;i++)
  {
  printf("\t%d",i);
  }
 }
else if (c==2)
 { i=1;
while(i<=n)
  {
  printf("\t%d",i);
  i++;
  }
 }
else if (c==3)
 {i=1;
  do
  {
 printf("\t%d",i);
  i++;
  }while (i<=n);
 }
return 0;
}
