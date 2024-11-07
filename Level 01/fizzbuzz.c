#include <unistd.h>

void ft_putnbr(int nb)
{
    if (nb >= 10)
        ft_putnbr(nb / 10);
    char c = (nb % 10) + '0';
    write(1, &c, 1);
}

int main(void)
{
    int i = 1;

    while (i <= 100)
    {
        if (i % 15 == 0)
            write(1, "fizzbuzz\n", 8);
        else if (i % 3 == 0)
            write(1, "fizz\n", 4);
        else if (i % 5 == 0)
            write(1, "buzz\n", 4);
        else 
            ft_putnbr(i);
        write(1, "\n", 1);
        i++;
    }
}
