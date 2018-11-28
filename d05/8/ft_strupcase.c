#define IS_LC(c) (c <= 122 && c >= 97 ? 1 : 0)

char *ft_strupcase(char *str)
{
	int index;

	index = 0;
	while (*(str+index))
	{
		if (IS_LC(*(str+index)))
			*(str + index) -= 32;
		index++;;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	printf("%s", ft_strupcase(*(argv + 1)));
	return (0);
}
