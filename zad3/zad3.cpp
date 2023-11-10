

#include <iostream>
#include <stdio.h>

int main()
{
    int n , a , sum=0;
    printf("vavedi n = ");
    scanf_s("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("vavedi chislo ");
        scanf_s("%d", &a);
        if (a < 0)sum = sum + a;
        
    }
    printf("suma = %d", sum);
}


