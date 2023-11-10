

#include <iostream>
#include <stdio.h>

int main()
{
    int random = (rand() % 10);
    int a;
    int opiti = 10;

    printf("Започва играта \"Познай магическото число\". \n Имаш право на 10 опита да го познаеш! \n Числото е ");

    for (int i = 0; i <= opiti; i++)
    {
       
       // int a; 
        scanf_s("%d", &a);
        if (a == random)printf("Позна!");
           else if (a > random)printf("Числото е по-малко. Опитай пак ->");
              else if (a < random)printf("Числото е по-голямо. Опитай пак ->");

    }
    

}


