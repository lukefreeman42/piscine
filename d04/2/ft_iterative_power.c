int		ft_iterative_power(int nb, int pow)
{
	if (pow < 0)
		return (0);
	int tot = 1;
	while (pow > 0)
	{
		tot *= nb;
		pow--;
	}
	return (tot);
}

int		main(int argc, char **argv)
{
	int nb = atoi(*(argv + 1));
	int pow = atoi(*(argv + 2));
	printf("%d", ft_iterative_power(nb, pow));
	return (0);
}
