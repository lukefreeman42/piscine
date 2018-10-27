#include <stdio.h>

#define IS_NUM(x) (x >= 48 && x <= 57 ? 1 : 0)
#define IS_NEG(x) (x == '-' ? 1 : 0)

int ft_atoi(char *str)
{
    int tot;
    int flag;
    tot = 0;
    flag = 0;

    if (IS_NEG(*str))
    {
        flag = 1;
        str++;
    }
    while (IS_NUM(*str))
    {
        tot = tot * 10 + (*str - 48);
        str++;
    }
    if(flag)
        return (-1 * tot);
    else
        return (tot);
}

int main(int argc, char **argv)
{
    argv++;
    int num = ft_atoi(*argv);
    printf("%d, %d", num, atoi(*argv));
    return 0;
}