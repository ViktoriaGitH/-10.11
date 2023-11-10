
#include <iostream>
#include <stdio.h>

int main()
{
    int N;
    printf("enter N = ");
    scanf_s("%d", &N);

    int znak = 0;
    int br = 0;

    // Input the sequence of N numbers
    printf("enter numbers  ");

    for (int i = 0; i < N; ++i) {
        double number;
        scanf_s("%lf", &number);


        int NewZnak;
        if (number > 0)NewZnak = 1;
        else if (number < 0)NewZnak = -1;
        else NewZnak = 0;
        
        if (znak != 0 && znak != NewZnak) {
            br++;
        }

        znak=NewZnak;
    }
    printf("Number of sign changes: %d", br);

    return 0;
}

