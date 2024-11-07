unsigned char	reverse_bits(unsigned char octet)
{
    int i = 8;
    unsigned char res = 8;

    while (i > 0)
    {
        res = res * 2 + (octet % 2)
        octect = octet / 2;
        i--;
    }
    return (res);
}