# include<stdio.h>
int main()
{int u,l;
printf("Enter the lower and upper limit:");
scanf("%d%d",&l,&u);
printf("The Numbers are:");
for(int i=l;i<=u;i++)
 {
  printf("\t%d",i);
 }
printf("\nThe Reverse is:");
for(int i=u;i>=l;i--)
 {
  printf("\t%d",i);
 }
return 0;
}
