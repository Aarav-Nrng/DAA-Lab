#include <stdio.h>

int main() 
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i=0; i<n; i++) 
    {
        printf("Enter a number: ");
        scanf("%d", &arr[i]);
    }
    int size = sizeof(arr) / sizeof(arr[0]);
    int unique[100];  
    int count = 0;

    for(int i=0; i<size; i++) {
        int m=1; 

        for(int j=0; j<count; j++) 
        {
            if (arr[i] == unique[j]) 
            {
                m = 0;  
                break;
            }
        }
        if(m == 1) {
            
            unique[count] = arr[i];
            count++;
            
        }
    }
    printf("Unduplicated array \n");
    
    for(int i=0; i<count; i++) {
        printf("%d ", unique[i]);
    }

    return 0;
}