//Seconds to Equivalent hours,minutes and seconds.
# include<stdio.h>
int main()
{int s,h,m,t;
printf("Enter the time in seconds");
scanf("%d",&t);
h=t/3600;
s=t%3600;
m=s/60;
printf("The Time is %d hours & %d minutes & %d seconds",h,m,s);
return 0;
}
