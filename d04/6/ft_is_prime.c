//https://www.saylor.org/site/wp-content/uploads/2012/07/Primality-test1.pdf
int		ft_is_prime(int nb)
{
	if (nb == 2)
		return (1);
	if (nb == 3)
		return (1);
	if (nb % 2 == 0)
		return (0);
	if (nb % 3 == 0)
		return (0);

	int test;
	test = 1;
	while ((6*test) + 1 < nb)
	{
		if (nb % ((6*test) + 1) == 0 || (nb %((6 * test) - 1) == 0))	
			return (0);
		test++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	printf("%d", ft_is_prime(atoi(*(argv + 1))));
	return (0);
}
