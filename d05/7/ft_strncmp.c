int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int index;
	int diff;

	index = 0;

	while (*(s1 + index) == *(s2 + index) && index < n - 1)
		index++;
	diff = *(s1 + index) - *(s2 + index);
	return(diff);
}

int		main(int argc, char **argv)
{
	printf("%d, %d", ft_strncmp(*(argv+1), *(argv+2), atoi(*(argv+3))), strncmp(*(argv+1), *(argv+2), atoi(*(argv+3))));
	return (0);
}
