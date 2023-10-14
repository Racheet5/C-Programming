//Sum of time in hours,minutes & seconds.
# include<stdio.h>
int main()
{int h1,h2,h3,m1,m2,m3,s1,s2,s3;
printf("Enter the Time 1");
scanf("%d%d%d",&h1,&m1,&s1);
printf("Enter the Time 2");
scanf("%d%d%d",&h2,&m2,&s2);
s3=s1+s2;
m3=m1+m2+(s1+s2)%60;
h3=h1+h2+(m1+m2)%60;
printf("The Final Time is %d hours %d minutes & %d seconds",h3,m3,s3);
return 0;
}
