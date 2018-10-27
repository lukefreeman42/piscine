#include <stdio.h>
#include <strings.h>

void    ft_swap(char *a, char *b)
{
    char holdme;

    holdme = *a;
    *a = *b;
    *b = holdme;
}

char    *ft_strrev(char *str)
{
    char *str_x = str;
    int len = strlen(str);
    int count = 0;

    while (count < len/2)
    {
        ft_swap((str + count), (str + len - 1 - count));
        count++;
    }
    return (str);
}

int main(int argc, char **argv)
{
    argv++;
    *argv = ft_strrev(*argv);
    printf("%s", *argv);
    return 0;
}