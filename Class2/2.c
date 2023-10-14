//Temperature from Fahrenheit to Celcius.
#include <stdio.h>
int main()
{float c,f,m;
printf("Enter the temperature in fahrenheit");
scanf("%f",&f);
m=(5.0/9);
c=((f-32)*m);
printf("The temperature in celcius is %f",c);
return 0;
}
