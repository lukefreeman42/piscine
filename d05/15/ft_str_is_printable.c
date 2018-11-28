#define IS_PR(x) (x >= 32 && x <= 126 ? 1 : 0)

int		ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!IS_PR(*str))
			return (0);
		str++;
	}

	return (1);
}

int		main(int agrc, char **argv)
{
	printf("%d", ft_str_is_printable(*(argv + 1 )));
	return (0);
}
