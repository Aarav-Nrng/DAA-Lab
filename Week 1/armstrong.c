#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int count=0;
    for(int i=num;i>0;)
    {
        i = i/10;
        count++;
    }
    printf("%d\n",count);
    int sum=0;
    for(int i=num;i>0;)
    {
        int digit = i%10;
    
        sum = sum + pow(digit,count);
        i = i/10;
    }
    if(sum == num)
    {
        printf("The number %d is armstrong",num);
    }
    else
    {
        printf("The number %d is not armstrong",num);
    }
}
