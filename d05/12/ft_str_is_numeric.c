#define IS_DIGIT(x) (x <= 59 && x >= 48 ? 1 : 0)

int		ft_str_is_numeric(char *str)
{
	while (*(str))
	{
		if (!IS_DIGIT(*str))
			return (0);
		str++;
	}

	return (1);
}

int		main(int argc, char **argv)
{
	printf("%d", ft_str_is_numeric(*(argv + 1)));
	return (0);
}
