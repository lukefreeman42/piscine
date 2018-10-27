#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define LAST_DIGIT(n, n_max)                (n == n_max ? 1 : 0)
#define DIGIT_OVERFLOWS(digits, n, n_max)   (*(digits + n) == 9 - n_max + n ? 1 : 0)
#define STOP_CONDITION(digits, n_max)       (*digits == 9 - n_max ? 1 : 0)

void    transfer_tick(int *digits, int n, int n_max);

void    set_digits(int * digits, int n)
{
    int count = 0;
    while (n-- > 0)
    {
        *digits = count++;
        digits++;
    }
}

void    print_digits(int *digits, int n_max)
{
    int d = 0;
    while (d <= n_max)
    {
        //int The_looking_glass = *(digits + d);
        printf("%d", *(digits + d));
        d++;
    }
    if (!STOP_CONDITION(digits, n_max))
            printf(", ");
}

void    invalid_input()
{
    printf("Invalid Input, 0 < n < 10\n");
    exit(1);
}

void    end_ticking(int *digits, int n_max)
{
    print_digits(digits, n_max);
    exit(0);
}

void    tick_digits(int *digits, int n, int n_max)
{
    if (STOP_CONDITION(digits, n_max))
        end_ticking(digits, n_max);

    if (LAST_DIGIT(n, n_max))
        print_digits(digits, n_max);

    if (DIGIT_OVERFLOWS(digits,n,n_max))
        transfer_tick(digits, n, n_max);

    *(digits + n) += 1;

    if (LAST_DIGIT(n, n_max))
        tick_digits(digits, n, n_max); //stay here

    else
        tick_digits(digits, n + 1, n_max); //tick next digit
}

void    tick_nd_correct(int *digits, int n, int n_max) {
    *(digits - 1 + n) += 1;

    while (n <= n_max) {
        *(digits + n) = *(digits - 1 + n) + 1;
        n++;
    }
}

void    transfer_tick(int *digits, int n, int n_max)
{
    if (STOP_CONDITION(digits, n_max))
        end_ticking(digits,n_max);

    if(DIGIT_OVERFLOWS(digits, n - 1, n_max))
        transfer_tick(digits, n - 1, n_max);

    else
        tick_nd_correct(digits, n, n_max);

    if (LAST_DIGIT(n, n_max))
        tick_digits(digits, n, n_max);
}

void ft_print_combn(int n)
{
    if (n <= 0 || n >= 10)
        invalid_input();

    int *digits = (int*) malloc(sizeof(int) * n);
    set_digits(digits, n);
    tick_digits(digits, n - 1, n - 1);
}

int main(int argc, char ** argv)
{
    if (argc > 1)
    {
        argv++;
        ft_print_combn(atoi(*argv));
    }
    return (0);
}