#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5;
    int b = 10;
    printf("a= %d,b= %d\n",a,b);
    int temp = a;
    a = b;
    b = temp;
    printf("a= %d,b= %d\n",a,b);
}