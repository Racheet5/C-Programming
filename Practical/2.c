# include<stdio.h>
void swap(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
printf("The swapped values are %d & %d",*a,*b);
}
int main()
{
int x,y,*a,*b;
printf("Enter 2 numbers:");
scanf("%d%d",&x,&y);
printf("The original values are %d & %d",x,y);
a=&x;
b=&y;
swap(a,b);

return 0;
}
