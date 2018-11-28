#define IS_UP(x) (x >= 65 && x <=90 ? 1 : 0)

int		ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!IS_UP(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	printf("%d", ft_str_is_uppercase(*(argv + 1)));
	return (0);
}
