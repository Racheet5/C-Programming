 //Average Marks.
# include<stdio.h>
int main()
{int m1,m2,m3,m4,m5,sum,avg;
printf("Enter the marks in 5 subjects:");
scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
sum=(m1+m2+m3+m4+m5);
avg=sum/5;
printf("The Average marks are %d",avg);
return 0;
}
