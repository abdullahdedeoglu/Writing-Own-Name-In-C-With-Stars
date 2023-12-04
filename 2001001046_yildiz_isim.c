#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int i, j;
    int sayi;
    printf("Harflerin boyutunu belirleyecek sayiyi giriniz:");
    scanf("%d", &sayi);

    printf("\n\n");

    for (i = 0; i < sayi; i++)
    {
        for (j = 0; j < sayi; j++)
        {
            if (i == 0 || j == 0 || j == sayi - 1 || i == sayi / 2)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n\n");

    if (sayi % 2 == 0)
    {
        for (i = 0; i < sayi; i++)
    {
        for (j = 0; j < sayi; j++)
        {
            if ((i == sayi - 2 && j == sayi - 2) || (i == 1 && j == sayi - 2) || (j == sayi - 1 && i > 1 && i < sayi - 2) || (i == sayi - 1 && j < sayi - 2) || (i == 0 && j < sayi - 2) || j == 0 || i == sayi / 2 - 1 )
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n\n");
    }
    else
    {
         for (i = 0; i < sayi; i++)
    {
        for (j = 0; j < sayi; j++)
        {
            if ((i == sayi - 2 && j == sayi - 2) || (i == 1 && j == sayi - 2) || (j == sayi - 1 && i > 1 && i < sayi - 2) || (i == sayi - 1 && j < sayi - 2) || (i == 0 && j < sayi - 2) || j == 0 || i == sayi / 2 - 1 )
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n\n");
    }


    for (i = 0; i < sayi; i++)
    {
        for (j = 0; j < sayi; j++)
        {
            if ((i == sayi - 2 && j == sayi - 2) || (i == 1 && j == sayi - 2) || (j == sayi - 1 && i > 1 && i < sayi - 2) || (i == sayi - 1 && j < sayi - 2) || (i == 0 && j < sayi - 2) || j == 0)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n\n");

    for (i = 0; i< sayi; i++)
    {
        for (j = 0; j < sayi; j++)
        {
            if (j == 0 || i == sayi - 1 || j == sayi - 1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n\n");

    for (i = 0; i < sayi; i++)
    {
        for (j = 0; j < sayi; j++)
        {
            if (i == sayi - 1 || j == 0)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n\n");

    for (i = 0; i < sayi; i++)
    {
        for (j = 0; j < sayi; j++)
        {
            if (i == sayi - 1 || j == 0)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n\n");

    for (i = 0; i < sayi; i++)
    {
        for (j = 0; j < sayi; j++)
        {
            if (i == 0 || j == 0 || j == sayi - 1 || i == sayi / 2)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n\n");

    for (i = 0; i < sayi; i++)
    {
        for (j = 0; j < sayi; j++)
        {
            if (j == 0 || j == sayi - 1 || i == sayi / 2)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n\n");

    printf("\n\n\n\n");

    for (i = 0; i < sayi; i++)
    {
        for (j = 0; j < sayi; j++)
        {
            if ((i == sayi - 2 && j == sayi - 2) || (i == 1 && j == sayi - 2) || (j == sayi - 1 && i > 1 && i < sayi - 2) || (i == sayi - 1 && j < sayi - 2) || (i == 0 && j < sayi - 2) || j == 0)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n\n");

    for (i = 0; i < sayi; i++)
    {
        for (j = 0; j < sayi; j++)
        {
            if (i == 0 || i == sayi - 1 || i == sayi / 2 || j == 0)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n\n");

    for (i = 0; i < sayi; i++)
    {
        for (j = 0; j < sayi; j++)
        {
            if ((i == sayi - 2 && j == sayi - 2) || (i == 1 && j == sayi - 2) || (j == sayi - 1 && i > 1 && i < sayi - 2) || (i == sayi - 1 && j < sayi - 2) || (i == 0 && j < sayi - 2) || j == 0)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n\n");

    for (i = 0; i < sayi; i++)
    {
        for (j = 0; j < sayi; j++)
        {
            if (i == 0 || i == sayi - 1 || i == sayi / 2 || j == 0)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n\n");

    for (i = 0; i < sayi; i++)
    {
        for (j = 0; j < sayi; j++)
        {
            if (i == 0 || i == sayi - 1 || j == 0 || j == sayi - 1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n\n");



    for (i = 0; i < sayi; i++)
    {
        for (j = 0; j < sayi; j++)
        {
            if (i == 0 || j == 0 || i == sayi - 1 || i >= sayi / 2 && j == sayi - 1 || i == sayi / 2 && j >= sayi / 2)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n\n");

    for (i = 0; i < sayi; i++)
    {
        for (j = 0; j < sayi; j++)
        {
            if (i == sayi - 1 || j == 0)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n\n");

    for (i = 0; i< sayi; i++)
    {
        for (j = 0; j < sayi; j++)
        {
            if (j == 0 || i == sayi - 1 || j == sayi - 1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n\n");








    return 0;
}
