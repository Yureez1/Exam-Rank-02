#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int i = 1;
    int nbr;

    nbr = atoi(argv[1]);
    if (argc == 2)
    {
        if (nbr == 1)
            printf("1");
        while (nbr > i++)
        {
            if (nbr % i == 0)
            {
                printf("%d", i);
                if (nbr == i)
                    break;
                nbr /= i;
                printf("*");
                i = 1;
            }
        }
    }
    printf("\n");
    return (0);
}
