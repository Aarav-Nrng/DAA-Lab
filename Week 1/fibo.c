#include <stdio.h>

//1 1 2 3 5 8 13 21 34 55 89 144

int Fibo(int f);

int main()
{
    int n;
    
    printf("Enter a number:");
    scanf("%d",&n);
    
    printf("\n");
    for(int i=0;i<=n;i++)
    {
        printf("%d ",Fibo(i));
    }
}

int Fibo(int f)
{
    if(f==1)
        return f;
    if (f==0)
        return f;
    return Fibo(f-2)+Fibo(f-1);
}
