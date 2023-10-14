# include<stdio.h>


int main()
{
struct stu
{
int m1,m2,m3;
}s1,s2;
printf("s1 marks");
scanf("%d",&s1.m1);
scanf("%d",&s1.m2);
scanf("%d",&s1.m3);
printf("s2 marks");
scanf("%d",&s2.m1);
scanf("%d",&s2.m2);
scanf("%d",&s2.m3);
printf("marks of student1 are:%d\t%d\t%d",s1.m1,s1.m2,s1.m3);
printf("marks of student2 are:%d\t%d\t%d",s2.m1,s2.m2,s2.m3);
return 0;
}
