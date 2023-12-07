#include<stdio.h>
#define n 7

int arr[n],i,j;

int bubleshoot(int arr[], int s)
{
    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < s - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                //swap the elements of array
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{ 
    int arr[7] = {8, 15, 20, 90, 35, 5, 45};

    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    bubleshoot(arr, n);

    printf("\nArray index : ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}