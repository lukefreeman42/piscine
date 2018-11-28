#define IS_UP(c) (c <= 90 && c >= 65 ? 1 : 0)

char	*ft_strlowcase(char *str)
{
	int index;

	index = 0;
	while (*(str + index))
	{
		if(IS_UP(*(str + index)))
			*(str + index) += 32;
		index++;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	printf("%s", ft_strlowcase(*(argv + 1)));
	return (0);
}

