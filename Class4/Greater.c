# include<stdio.h>
int main()
{
int a,b,c,great;
printf("Enter 3 numbers:");
scanf("%d%d%d",&a,&b,&c);
great=a>b?(a>c?a:c):(b>c?b:c);
printf("\nThe greatest among the 3 is %d",great);
return 0;
}
