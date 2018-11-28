void	ft_putnbr(int nbr)
{
	if (nbr != 0)
	{
		char digit;

		if (nbr < 0)
		{
			digit = '-';
			write (1, &digit, 1);
			ft_putnbr(nbr * -1);
		}
		else
		{
			digit = (nbr % 10) + 48;
			ft_putnbr(nbr / 10);
			write (1, &digit, 1);
		}
	}
}

int		main(int argc, char **argv)
{
	ft_putnbr(atoi(*(argv + 1)));
	return (0);
}
