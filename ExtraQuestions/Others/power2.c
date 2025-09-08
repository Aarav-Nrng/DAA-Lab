#include <stdio.h>

int main()
{
    int range = 10000;
    for(int n=1;n<=range;n++)
    {
        int power2 = 1;
        for(int i=n;i>1;i=i/2)
        {
            if(i%2==1)
            {
                power2 = 0;
                break;
            }
        }
        if(power2==1)
        {
            printf("%d Yes\n",n);
        }
    }

    return 0;
}
