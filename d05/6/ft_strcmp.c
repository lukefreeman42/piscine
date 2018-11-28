int		ft_strcmp(char *s1, char *s2)
{
	int diff;
	int index;

	index = 0;
	while (*(s1 + index) == *(s2 + index))
		index++;
	diff = *(s1 + index) - *(s2 + index);
	return (diff);
}

int		main(int argc, char ** argv)
{
	printf("%d, %d", ft_strcmp(*(argv + 1), *(argv + 2)), strcmp(*(argv + 1), *(argv + 2)));
	return (0);
}
