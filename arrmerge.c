#include<stdio.h>
int main()
{
    int a[5], b[5], i, temp[10], count = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Value of A is[%d] :",i);
        scanf("%d",&a[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Value of B is[%d] :",i);
        scanf("%d",&b[i]);
    }
    
    for (int i = 0; i < 5; i++)
    {
        temp[count] = a[i];
        count++;
    }

    for (int i = 0; i < 5; i++)
    {
        temp[count] = b[i];
        count++;
    }
    
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",temp[i]);
    }
    return 0;
}