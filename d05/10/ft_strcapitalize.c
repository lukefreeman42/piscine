#define IS_LC(c) (c <= 122 && c >= 97 ? 1 : 0)
#define IS_UP(ch) (ch >= 65 && ch <= 90 ? 1 : 0)
#define IS_NUM(cha) (cha >= 49 && cha <= 57 ? 1 : 0)
#define IS_WS(w) (!(IS_UP(w)) && !(IS_LC(w)) && !(IS_NUM(w)) ? 1 : 0)

char	*ft_strcapitalize(char *str)
{
	int index;
	int ws;

	index = 0;
	ws = 1;
	while (*(str + index))
	{
		if (ws == 1 && IS_LC(*(str + index)))
			*(str + index) -= 32;
		else if (ws == 0 && IS_UP(*(str + index)))
			*(str + index) += 32;
		if (ws == 1)
			ws = 0;
		if (IS_WS(*(str + index)))
			ws = 1;
		index++;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	printf("%s", ft_strcapitalize(*(argv + 1)));
	return (0);
}
