#include<stdio.h>

    //10 20 30 40 50 => 50 20 30 40 10

int main()
{
    int a[5], i, j = 0;
    
    for (int i = 0; i < 5; i++)
    {
        printf("Value A is [%d] : ", i);
        scanf("%d", &a[i]);
        j++;
    }
    j--;
    for (int i = 0; i < 5; i++)
    {
        if (i == 0)
        {
            printf("%d",a[j]);
        }
        else if (i == j)
        {
            printf("%d",a[0]);
        }
        else
        {
            printf("%d",a[i]);
        }
    }
    
    return 0;
            
}