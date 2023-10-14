# include<stdio.h>
int main()
{
 int n,l;
printf("Enter the number to be reversed");
scanf("%d",&n);
while(n)
 {l=n%10;
  printf("%d",l);
  n=n/10;
 }
return 0;
}
