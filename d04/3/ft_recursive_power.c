int		ft_recursive_power(int nb, int pow)
{
	if (pow == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, pow - 1));
}

int		main(int argc, char ** argv)
{
	int nb = atoi(*(argv + 1));
	int pow = atoi(*(argv + 2));

	printf("%d", ft_recursive_power(nb, pow));
	return (0);
}
