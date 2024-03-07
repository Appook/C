# include <stdio.h>
int main()
{
    char c = 'S', d = '#';
    char *p1 = &c;
    char *p2 = &d;
    char *p3;
    printf("Value of c using pointer *p1 = %c \n", *p1);
    printf("*p2 = %c \n", *p2);
    p3 = &d;
    printf("*p3 = %c \n", *p3);
    p3 = p1;
    printf("*p3 = %c \n", *p3);
    printf("*p1 = %c \n", *p1);
    printf("p3 = %p \n", p3);
    *p1 = *p2;
    printf("*p1 = %c \n", *p1);
    p1 = &c;
    printf("*p1: %c \n", *p1);
    printf("Pointer is a variable, which value is the address of the pointed object p1 = %p \n", p1);
    printf("Address f the pointer: %p \n", &p3);
    return 0;

}