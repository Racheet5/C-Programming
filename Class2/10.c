//Sum of digits of a number.
# include<stdio.h>
int main()
{int c,o,t,h,sum;
printf("Enter a 3 digit number");
scanf("%d",&c);
o=c%10;
t=(c/10)%10;
h=(c/100)%10;
sum=o+t+h;
printf("The sum of the digits is %d",sum);
return 0;
}
