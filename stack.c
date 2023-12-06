#include<stdio.h>
#define n 5

int a[n],top=-1;

int display()
{
    for (int i = 0; i <= top; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

int insertEnd(int val)
{
    if (top >= n - 1)
    {
        printf("Stack is Full...\n");
    }
    else
    
    {
        // top++;
        a[++top] = val;
    }
}

int deleteEnd()
{
    if (top <= -1)
    {
        printf("Stack is Empty...\n");
    }
    else
    {
        top--;
    }
}

int insertFirst(int val)
{
    int j,k;

    if (top == -1)
    {
        a[++top] = val;
    }
    else if (top >= 4)
    {
        printf("\nStack is already full");
    }
    else
    {
        top++;
        k = top - 1;

        for (int i = top; i > 0; i--)
        {
            a[i] = a[k];
            k--;
        }
        a[0] = val;
    }
}

int deleteFirst()
{
    int j = 1;

    if (top == -1)
    {
        printf("\nStack");
    }
    
}

int main() 
{
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    deleteEnd();
    deleteEnd();
    display();

    return 0;
}