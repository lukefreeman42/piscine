#include <unistd.h>

void    ft_putnbr(int num)
{
    if (num < 0)
    {
        write(1, "-", 1);
        ft_putnbr(num * -1);
    }
    else if (num != 0)
    {
        ft_putnbr(num / 10);
        num = (num % 10) + 48;
        write(1, &num, 1);
    }
}

int main(int argc, char ** argv)
{
    argv++;
    int num = atoi(*argv);

    ft_putnbr(num);
    return (0);
}