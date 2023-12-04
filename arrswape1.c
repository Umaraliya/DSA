#include<stdio.h>

    //10 20 30 40 50 => 20 30 40 50 10

int main()
{
    int a[5], i, j = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Value of A is [%d] :",i);
        scanf("%d",&a[i]);
        j++;
    }
    j--;
    for (int i = 0; i < 5; i++)
    {
        if (i == 0)
        {
            continue;
        }
        else
        {
            printf("%d ",a[i]);
        }
        
    }
        printf("%d",a[0]);

    return 0;   
}