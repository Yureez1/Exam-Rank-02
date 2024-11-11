#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int i;
    int nbr;

    if (argc == 2)
    {
        nbr = atoi(argv[1]);
        i = 2;
        if (nbr == 1)
            printf("1");
        while (nbr > 1)
        {
            if (nbr % i == 0)
            {
                printf("%d", i);
                nbr /= i;
                if (nbr > 1)
                    printf("*");
            }
            else
                i++;
        }

    }
    printf("\n");
    return (0);
}
