#include <stdio.h>

int main()
{
    int arr[5] = {50, 100, 150, 200, 250};

    for (int i = 0; i < 5; i++)
    {    
        if(arr[i] == 150)
        {
            printf("150 is %d \n",i);
        } 
    }
    return 0;
}