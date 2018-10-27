#include <unistd.h>
void ft_putnum(int num)
{
	int tens;
	int ones;

	ones = (num % 10) + 48;
	tens = (num / 10) + 48;

	write(1, &tens, 1);
	write(1, &ones, 1);;
}

int main(int argc, char ** argv)
{
	int one;
	int two;

	one = 0;
	two = 1;

	while (one <= 98)
	{
		while (two <= 99)
		{
			ft_putnum(one);
			write( 1, " ", 1);
			ft_putnum(two);
			write(1, " ,", 2);
			two += 1;
		}
		one += 1;
		two = one + 1;
	}
	return (0);
}
