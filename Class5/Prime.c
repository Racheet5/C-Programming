# include<stdio.h>
int main()
{
int n;
printf("Enter a number:");
scanf("%d",&n);
for(int i=1;i<=n;i++)
 {
  if (n/i==2)
  {printf("\nIt is a prime number");}
  else 
  {printf("\nIt is not a prime number");}
   break;
 }
return 0;
}
