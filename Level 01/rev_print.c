#include <unistd.h>

char	*rev_print(char *str)
{
    int len = 0;

    while (str[len])
        len++;
    while(--len >= 0)
    {
        write(1, &str[len], 1);
    }
    return (str);
}

int main(void)
{
    rev_print("Je suis une loutre");
    return (0);
}