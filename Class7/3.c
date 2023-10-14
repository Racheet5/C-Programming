# include<stdio.h>
int main()
{
int n=5;
for (int i=n;i>0;i--)
 {int m=n;
  for (int j=i;j>0;j--)
  {
   printf("%d",m);
   m--;  
  }printf("\n");n--;
 }
return 0;
}
