

#include <iostream>
#include <stdio.h>

int main()
{
    for (int i = 1; i < 100; i++)
    {
        //int n = 1;
        if (i % 7 == 0)
        {
            if (i == 98)
            {
                printf("%d ; ", i);
                break;
            }
            printf("%d , ", i);
        }
    }
}

