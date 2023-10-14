# include<stdio.h>
int main()
{char a;
printf("Enter a letter\n");
scanf("%c",&a);
if ((a>='A')&&(a<='Z'))
 {a=a+32;
 printf("The letter is %c",a);
 }
else if ((a>='a')&&(a<='z'))
 {printf("Inappropriate message");
 }
return 0;
}
