# include<stdio.h>
int main()
{char c;
printf("Enter a alphabet");
scanf(" %c",&c);
switch ('c')
 {
  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
  case 'A':
  case 'E':
  case 'I':
  case 'O':
  case 'U':printf("It is a vowel");break;
  default :printf("It is a consonant");break;
 }
return 0;
}
