#include <stdio.h>

int main()
{
    int a;
    int b;
    printf("Enter first num: ");
    scanf("%d",&a);
    printf("Enter second num: ");
    scanf("%d",&b);
    int small = a<=b?a:b;
    int hcf=1;
    for(int i = small;i>=1;i--)
    {
        if(a%i==0 && b%i==0)
        {
            hcf = i;
            break;
        }
    }
    printf("Highest common factor: %d",hcf);
}