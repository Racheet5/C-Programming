//Swapping without third variable.
# include<stdio.h>
int main()
{int a,b,c;
printf("Enter the numbers");
scanf("%d%d",&a,&b);
printf("the numbers are %d & %d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("the swapped numbers are %d & %d",a,b);
return 0;
}
