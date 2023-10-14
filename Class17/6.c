# include<stdio.h>
struct student
{
char name[];
int roll;
int m1,m2,m3,;
}s[10];
int main()
{
int n,i,avg=0,high,low;
printf("Enter number of students:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter name:");
scanf("%s",&s[i].name)
printf("Enter roll:");
scanf("%d",&s[i].roll);
printf("Enter mark1:");
scanf("%d",&s[i].m1);
printf("Enter mark2:");
scanf("%d",&s[i].m2);
printf("Enter mark3:");
scanf("%d",&s[i].m3);
 } 
avg=s[i].m1+s[i].m2+s[i].m3;
high=low=
}

printf("The highest & lowest are %d & %d",high,low)
return 0;
}
