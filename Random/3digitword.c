# include<stdio.h>
int main()
{
 int n,o,t,h;
printf("Enter a number(3 digit):");
scanf("%d",&n);
o=n%10;
t=((n/10)%10);
h=n/100;
if (n<10)
{switch (o)
 {
  case 1:printf("one");break;
  case 2:printf("two");break;
  case 3:printf("three");break;
  case 4:printf("four");break;
  case 5:printf("five");break;
  case 6:printf("six");break;
  case 7:printf("seven");break;
  case 8:printf("eight");break;
  case 9:printf("nine");break;
 }
}
else if ((n>10)&&(n<20))
{switch (n)
 {
  case 11:printf("eleven");break;
  case 12:printf("twelve");break;
  case 13:printf("thirteen");break;
  case 14:printf("fourteen");break;
  case 15:printf("fifteen");break;
  case 16:printf("sixteen");break;
  case 17:printf("seventeen");break;
  case 18:printf("eighteen");break;
  case 19:printf("nineteen");break;
  default:;
 }
}
else if ((n>19)&&(n<100))
{switch (t)
 {
  case 1:printf("ten");break;
  case 2:printf("twenty");break;
  case 3:printf("thirty");break;
  case 4:printf("forty");break;
  case 5:printf("fifty");break;
  case 6:printf("sixty");break;
  case 7:printf("seventy");break;
  case 8:printf("eighty");break;
  case 9:printf("ninety");break;
 }
switch (o)
 {
  case 1:printf("one");break;
  case 2:printf("two");break;
  case 3:printf("three");break;
  case 4:printf("four");break;
  case 5:printf("five");break;
  case 6:printf("six");break;
  case 7:printf("seven");break;
  case 8:printf("eight");break;
  case 9:printf("nine");break;
 }
}
else if  ((n>=100)&&(n<1000))
{
switch (h)
 {
  case 1:printf("One Hundred");break;
  case 2:printf("Two Hundred");break;
  case 3:printf("Three Hundred");break;
  case 4:printf("Four Hundred");break;
  case 5:printf("Five Hundred");break;
  case 6:printf("Six Hundred");break;
  case 7:printf("Seven Hundred");break;
  case 8:printf("Eight Hundred");break;
  case 9:printf("Nine Hundred");break;
 }
switch (t)
 {
  case 1:printf("ten");break;
  case 2:printf("twenty");break;
  case 3:printf("thirty");break;
  case 4:printf("forty");break;
  case 5:printf("fifty");break;
  case 6:printf("sixty");break;
  case 7:printf("seventy");break;
  case 8:printf("eighty");break;
  case 9:printf("ninety");break;
 }
switch (o)
 {
  case 1:printf("one");break;
  case 2:printf("two");break;
  case 3:printf("three");break;
  case 4:printf("four");break;
  case 5:printf("five");break;
  case 6:printf("six");break;
  case 7:printf("seven");break;
  case 8:printf("eight");break;
  case 9:printf("nine");break;
 }
}
return 0;
}
