#include<stdio.h>
#include <string.h>
struct book
{
char title[50];
char author[50];
int id;
}
book;
int main()
{
    struct book book1,book2;
    strcpy(book1.title,"rich dad poor dad");
    strcpy(book1.author,"robert kiyosaki");
    strcpy(book1.id,"585");

    strcpy(book2.title,"minna no nihongo");
    strcpy(book2.author,"goyal sahib");
    strcpy(book2.id,"5634");
    
    printf("detail of book 1 \nTitle: %s\n",book1.title);
    printf("Author: %s\n",book1.author);
    printf("Suject: %s\n",book1.id);

    printf("details of book2 \nTitle: %s\n",book2.title);
    printf("Author: %s\n",book2.author);
    printf("Suject: %s\n",book2.id);

    printf("after using copy function on book2");

    strcpy(book2.title,book1.title);
    strcpy(book2.author,book1.author);
    strcpy(book2.id,book1.id);

    printf("Title: %s\n",book2.title);
    printf("Author: %s\n",book2.author);
    printf("Suject: %s\n",book2.id);



    return 0;
}