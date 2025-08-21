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
    int big=A[0];
    int pos=0;
    for(int i=1;i<l;i++)
    {
        if(A[i]>big)
        {
            big=A[i];
            pos=i;
        }  
    }
    A[pos]=A[0];
    A[0]=big;
    //put largest elem at 1st position and find biggest from 2nd position 
    big=A[1];
    for(int i=2;i<l;i++)
    {
        if(A[i]>big)
        {
            big=A[i];
            pos=i;
        }  
    }
    printf("The second largest element is %d",big);

    return 0;
}

