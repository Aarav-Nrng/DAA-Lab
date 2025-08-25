#include <stdio.h>

int getLen(char str[])
{
    int i=0;
    while(str[i] != '\0')
    {
        if(str[i]=='\n')
        {
            str[i]='\0';
            break;
        }
        i++;
    }

    return i;
}


void sortString(char str[],int len)
{
    //convert to Uppercase
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>=97 && str[i]<=122)
        {
            str[i]=str[i]-32;
        }
    }
    int small = 0;
    for(int i=0;i<len;i++)
    {
        small = i;
        for(int j=i+1;j<len;j++)
        {
            if(str[j]<str[small])
            {
                small = j;
            }
        }
        char temp = str[i];
        str[i]=str[small];
        str[small] = temp;
    }
    printf("Sorted %s",str);
}

int main()
{
    char str1[100]="";
    printf("Enter a string:");
    fgets(str1,20,stdin);
    int len1 = getLen(str1);
    
    char str2[100]="";
    printf("Enter a string:");
    fgets(str2,20,stdin);
    int len2 = getLen(str2);

    sortString(str1,len1);
    sortString(str2,len2);

    if(len1 != len2)
    {
        printf("Inputs strings are not Anagrams\n");
        return 0;
    }
    int anagram = 1;
    for(int i=0;i<len1;i++)
    {
        if(str1[i] != str2[i])
        {
            anagram = 0;
            break;
        }
    }
    if(anagram == 1)
    {
        printf("Inputs strings are Anagrams\n");
    } 
    else
    {
        printf("Inputs strings are not Anagrams\n");
    }
    return 0;
}