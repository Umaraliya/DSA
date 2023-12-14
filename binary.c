#include<stdio.h>
#define n 5

int binarysearch(int arr[], int k)
{
    int low = 0, mid, count = 0, high = n - 1;

    mid = (low + high) / 2;

        for (int i = 0; i < n; i++)
        {
            if (arr[mid] == k)
            {
                count++;
            }
            else if (arr[mid] > k)
            {
                high = mid - 1;
            
                for (int i = 0; i < mid; i++)
                {
                    if (arr[i] == k)
                    {
                        count++;
                    }
                }
            }
            else if (arr[mid] < k)
            {
                low = mid + 1;

                for (int i = mid; i <= high; i++)
                {
                    if (arr[i] == k)
                    {
                        count++;
                    }
                }  
            }
        } 

    if(count >= 1)
    {
        printf("Element found at index.");
    }
    else
    {
        printf("Element not found at index.");
    }

}

int main()
{
    int search, arr[n];
    
    for (int i = 0; i < n; i++)
    {
        printf("Enter array[%d] : ",i);
        scanf("%d",&arr[i]);
    }

        printf("Enter number of search : ");
        scanf("%d",&search);

        binarysearch(arr, search);

    return 0;
}