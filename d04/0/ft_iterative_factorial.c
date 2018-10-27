int		ft_iterative_factorial(int nb)
{
	int tot = 1;

	while (nb > 0)
	{
		tot *= nb;
		nb--;
	}
	return (tot);
}

int		main(int argc, char **argv)
{
	int nb = atoi(*(argv+1));
	printf("%d", ft_iterative_factorial(nb));
	return (0);
}
