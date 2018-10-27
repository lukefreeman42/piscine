int		ft_sqrt(int nb)
{
	int i = 0;
	while ( nb - (i * i) > 0)
		i++;
	if (i * i == nb)
		return (i);
	else
		return (-1);
}

int		main(int argc, char **argv)
{
	int nb = atoi(*(argv + 1));
	printf("%d", ft_sqrt(nb));
	return (0);
}
