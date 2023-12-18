#include <stdio.h>

int a[10], mid, end, start, j, r, x = 0, z = 0;
    
int getdata()
{
    for (int i = 0; i < j; i++)
    {
        printf("enter the [%d] number :", i + 1);
        scanf("%d", &a[i]);
    }
}

int arrange()
{
    int b;

    for (int i = 0; i < j; i++)
    {
        for (int j = i + 1; j < j; j++)
        {
            if (a[i] > a[j])
            {
                b = a[i];
                a[i] = a[j];
                a[j] = b;
            }
        }
    }
}

int function(int s)
{
    z = mid;

    if (mid >= 0 && mid <= j)
    {
        if(z == mid)
        {
            x++;

            if(x > 3)
            {
                return 0;
            }
        }
        if (a[mid] == s)
        {
            return 1;
        }
        else if (a[mid] < s)
        {
            start = mid;
            end =j;
            mid = (start + end) / 2;

            return function(s);
        }
        else if (a[mid] > s)
        {
            end = mid;
            start=0;
            mid = (start + end) / 2;

            return function(s);
        }
    }
    else
        return 0;
}

int display()
{
    for (int i = 0; i < j; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int s, end = j, start = 0;

    printf("Enter the length of the array :");
    scanf("%d", &j);

    printf("Enter a number to search :");
    scanf("%d", &s);
    
    getdata();
    arrange();

    r = function(s);
    
    if (r == 1)
        printf("Value is present in the Array ");
    else if (r == 0)
        printf("Value is not present in the Array ");

    return 0;
}