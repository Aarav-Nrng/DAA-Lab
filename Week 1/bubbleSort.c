#include <stdio.h>
#include <stdlib.h>

int main()
{
    int len;
    printf("Enter the size of array:");
    scanf("%d",&len);
    int arr[len];
    for(int i=0;i<len;i++)
    {
        printf("Enter a number:");
        scanf("%d",&arr[i]);
    }
    //check if sorted already
    int sorted = 0;
    for(int i=0;i<len-1;i++)
    {
        if(arr[i] > arr[i+1])
        {
            sorted = 0;
            break;
        }
        if(arr[i] <= arr[i+1])
        {
            sorted = 1;
        }
    }
    //Already sorted
    if(sorted==1)
    {
        for(int i=0;i<len;i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\nAlready sorted\n");
        return 0;
    }

    printf("before sorting\n");
    for(int i=0;i<len;i++)
    {
        printf("%d ", arr[i]);
    }

    for (int i=len-1; i>=0; i--)
    {
        for (int j=0;j<i;j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("\nafter sorting\n");
    for(int i=0;i<len;i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}