# include<stdio.h>
int main()
{
int n,third;
int first=0,second=1;

printf("Enter the last number:");
scanf("%d",&n);
for (int i=0;i<=n;i++)
 {third=first+second;
  first=second;
  second=first;
 }
printf("The Series is %d.%d.%d.",first,second,third);
return 0;
}
