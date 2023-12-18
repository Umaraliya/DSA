//self refrential node

#include<stdio.h>

struct node{

    int data;
    char ch;
    struct node * ptr;

};

int main()
{
    struct node a, b, c, d;
    
    a.data = 10;
    a.ch = 'A';
    a.ptr = NULL;

    b.data = 20;
    b.ch = 'B';
    a.ptr = NULL;

    c.data = 30;
    c.ch = 'C';
    c.ptr = NULL;

    d.data = 40;
    d.ch = 'D';
    d.ptr = NULL;

    // printf("A : data : %d, ch : %c", a.data, a.ch);
    // printf("\nB : data : %d, ch : %c", b.data, b.ch);
    // printf("\nC : data : %d, ch : %c", c.data, c.ch);
    // printf("\nD : data : %d, ch : %c", d.data, d.ch);

    a.ptr = &b;
    printf("\nB : Data : %d, ch : %c", a.ptr->data, a.ptr->ch);
    
    b.ptr = &a;
    printf("\nA : Data : %d, ch : %c", b.ptr->data, b.ptr->ch);
    
    c.ptr = &d;
    printf("\nC : Data : %d, ch : %c", c.ptr->data, c.ptr->ch);
    
    d.ptr = &c;
    printf("\nD : Data : %d, ch : %c", d.ptr->data, d.ptr->ch);
}