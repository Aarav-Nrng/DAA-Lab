#include <stdio.h>

int main()
{
    int arr[] = {3,0,2,1,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int total = (n*(n+1))/2;
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum = sum + arr[i];
    }
    int missing = total - sum;
    printf("The missing num is:%d",missing);

    return 0;
}