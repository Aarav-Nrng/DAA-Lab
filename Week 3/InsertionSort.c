#include <stdio.h>

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

    //sorting
    for (int i=1; i<len; i++)
    {
        int key = arr[i];
        int insert = i;
        for (int j=i-1;j>=0;j--)
        {   
            if(key < arr[j])
            {
                arr[j+1] = arr[j];
                insert = j;
                continue;
            }
        }
        arr[insert] = key;
    }

    printf("\nafter sorting\n");
    for(int i=0;i<len;i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
