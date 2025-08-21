#include <stdio.h>

int main()
{
    int l;
    printf("Enter size of list:");
    scanf("%d",&l);
    int A[l];
    for(int i=0;i<l;i++)
    {
        printf("Enter a number:");
        scanf("%d",&A[i]);
    }
    printf("THE ARRAY IS:\n");
    for(int i=0;i<l;i++)
    {
        printf("%d ",A[i]);
    }
    int big = A[0];
    int small = A[0];
    for(int i=0;i<l;i++)
    {
        if(A[i]>big)
        {
            big=A[i];
        }
        if(A[i]<small)
        {
            small=A[i];
        }
    }

    printf("\nLargest element is %d",big);
    printf("\nSmallest element is %d",small);

    return 0;
}