# include<stdio.h>
int main()
{
  char a;
  printf("Enter a character\n");
  scanf("%c",&a);
if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
{
printf("It is a vowel\n");
else
printf("It is a consonant");
}
else if (!(((a>='a')&&(a<='z'))||((a>='A')&&(a<='Z'))))
{
printf("It is an alphabet");
}
else 
{
printf("It is a special character");
}
return 0;
}
