#include <stdio.h>

int main()
{
    int i;

    for(i = 1; ; i++)
    {
        printf("%d ", i);

        if(i == 9)
            break;
    }

    return 0;
}