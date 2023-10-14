# include<stdio.h>
int main()
{int m1,m2,m3,m4,m5,sum,avg,g;
printf("Enter the marks in 5 subjects:");
scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
sum=(m1+m2+m3+m4+m5);
avg=sum/5;
g=avg/10;
switch (g)
 {
  case 4:printf("The grade obtained is D");break;
  case 5:printf("The grade obtained is C");break;
  case 6:printf("The grade obtained is B");break;
  case 7:printf("The grade obtained is A");break;
  case 8:printf("The grade obtained is E");break;
  case 9:printf("The grade obtained is O");break;
 }
return 0;
}
