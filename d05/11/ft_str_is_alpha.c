#define IS_ALPHA(x) ((x <= 90 && x >= 65) || (x <= 122 && x >= 97) ? 1 : 0)

int		ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if(!IS_ALPHA(*str))
			return (0);
		str++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int flag = (ft_str_is_alpha(*(argv + 1)));
	printf("%d", flag);;
	return (0);
}
