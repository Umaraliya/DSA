#include<stdio.h>
#define n 5

int a[n], f = -1, r = -1;

int display()
{
    for (int i = f + 1; i <= r; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

int insertEnd(int val)
{
    if (r == n - 1)
    {
        printf("\nFully...\n");
    }
    else
    {
        // f++;
        a[++r] = val;
    }
}

int deleteFirst()
{
    if(f == r)
    {
        f = -1;
        r = -1;
    }
    if (f == -1 && r == -1)
    {
        printf("\nQueue is Empty...\n");
    }
    f++;  
}

int main()
{
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
    insertEnd(50);
    deleteFirst();
    deleteFirst();
    deleteFirst();
    deleteFirst();
    deleteFirst();
    deleteFirst();
    display();

    return 0;
}