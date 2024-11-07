#include <stdio.h>

char	*ft_strrev(char *str)
{
    int i = -1;
    int len = 0;
    char temp;

    while(str[len])
        len++;
    while (++i < len / 2)
    {
        temp = str[i];
        str[i] = str[len - i + 1];
        str[len - i + 1] = temp;
    }
    return (str);
}

int main(void)
{
    printf("%s\n", ft_strrev("Je suis une loutre"));
    return (0);
}