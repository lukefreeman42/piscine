int		ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int		main(int argc, char **argv)
{
	int index = atoi(*(argv + 1));
	printf("%d", ft_fibonacci(index));
	return (0);
}
