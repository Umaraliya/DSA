#include<stdio.h>

int selection(int arr[])
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = i; j < 8; j++)
        {
            if (arr[i] > arr[j])
            {
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }  
        }  
    }  
}

int main()
{
    int arr[8] = {7, 21, 17, 75, 32, 3, 47, 11};

    selection(arr);

    for (int i = 0; i < 8; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}