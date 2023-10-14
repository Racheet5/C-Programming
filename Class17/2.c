# include<stdio.h>
int main()
{
struct book
{
char title[50];
char publisher[50];
char writer[50];
int price;
}b1;
printf("Enter the book title");
gets(b1.title);
printf("Enter the book publisher");
gets(b1.publisher);
printf("Enter the book writer");
gets(b1.writer);
printf("Enter the book price");
scanf("%d",&b1.price);
printf("Title:%s\nPublisher:%s\nWriter:%s\nPrice:%d",b1.title,b1.publisher,b1.writer,b1.price);
return 0;
}
