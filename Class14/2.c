# include<stdio.h>                            //Swapping with a third variable.
void swap(int a,int b)
{int temp;
temp=a;
a=b;
b=temp;
printf("Swapped numbers are %d & %d",a,b); 
}
int main()
{
int m,n;
printf("Enter the numbers to be swapped");
scanf("%d%d",&m,&n);
printf("Original numbers are %d & %d",m,n);
swap(m,n);
return 0;
}
