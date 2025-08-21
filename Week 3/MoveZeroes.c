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
    printf("before movement\n");
    for(int i=0;i<len;i++)
    {
        printf("%d ", arr[i]);
    }

    //movement
    int num_non_zero = 0;
    for (int i=0; i<len; i++)
    {
        if(arr[i]!=0)
        {
            if(arr[num_non_zero] == 0)
            {
                arr[num_non_zero] = arr[i];
                arr[i] = 0;
                num_non_zero++;
            }
        }
    }

    printf("\nafter movement\n");
    for(int i=0;i<len;i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}