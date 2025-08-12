#include <stdio.h>
#include <string.h>

int main()
{
    char str[100]="";
    printf("Input a String:");
    fgets(str,20,stdin);
    int len=strlen(str);
    printf("%s",str);
    for(int i=0;i<len;i++)
    {
        if((str[i]>=97 && str[i]<=122))
        {
        str[i] -= 32;
        }
    }
    printf("%s",str);
}