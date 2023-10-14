//Reverse of a 3 digit Number.
# include<stdio.h>
int main()
{int c,o,t,h;
printf("Enter a 3 digit number");
scanf("%d",&c);
o=c%10;
t=(c/10)%10;
h=(c/100)%10;
printf("The reversed number is %d%d%d",o,t,h);
return 0;
}
