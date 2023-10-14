# include<stdio.h>                      //Swapping with a Third Variable.
int main()
{int a,b,c;
printf("Enter the 2 Numbers");
scanf("%d%d",&a,&b);
printf("The original numbers are %d%d",a,b);
c=a;
a=b;
b=c;
printf("The swapped numbers are %d%d",a,b);
return 0;
}
