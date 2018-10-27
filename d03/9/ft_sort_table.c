#include <stdio.h>
#include <stdlib.h>



void    ft_swap(int *a, int *b)
{
    int holdme;
    int looking_glass;
    holdme = *a;
    looking_glass = *b;
    *a = *b;
    *b = holdme;
}

void    sort(int *table, int me, int size)
{
    // int looking_glass = *(table + me);
    if (me >= size)
        ;
    else
    {
        if (me == 0)
            sort(table, me + 1, size);
        if (*(table + me) >= *(table + me - 1))
            sort(table, me + 1, size);
        if (*(table + me) < *(table + me - 1))
        {
            ft_swap((table + me), (table + me - 1));
            sort(table, me - 1, size);
        }
    }
}

void    ft_sort_integer_table(int *table, int size)
{
    sort(table, 0, size);
}

int     ft_strlen(char *str)
{
    int count;
    count = 0;

    while (*str != '\0')
    {
        count++;
        str++;
    }
    return (count);
}

int     *maketable(char *str)
{
    int len = ft_strlen(str);
    int *table = malloc (sizeof(int) * len);
    int count;

    count = 0;

    while (count < len)
    {
        *(table + count) = *(str + count) - 48;
        count++;
    }
    return (table);
}

int main(int argc, char **argv)
{
    int *table = maketable(*(argv + 1));
    int size = ft_strlen(*(argv + 1));
    int count = 0;
    ft_sort_integer_table(table, size);

    while(count < size)
    {
        printf("%d, ", *(table + count));
        count++;
    }
    return (0);
}
