int		ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	else
		return (ft_recursive_factorial(nb - 1) * nb);
}

int		main(int argc, char **argv)
{
	int nb = atoi(*(argv+1));
	printf("%d", ft_recursive_factorial(nb));
}
