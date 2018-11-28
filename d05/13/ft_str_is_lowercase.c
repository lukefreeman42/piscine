#define IS_LC(x) (x <= 122 && x >= 97 ? 1 : 0)

int		ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!IS_LC(*str))
			return (0);
		str++;
	}
	return (1);
}

int		main (int argc, char **argv)
{
	printf("%d", ft_str_is_lowercase(*(argv + 1)));
	return (0);
}
