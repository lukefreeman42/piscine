char	*ft_strncat(char *dest, char *src, int n)
{
	char *dest_cp = dest;
	while (*dest++)
		;
	while (n > 0)
	{
		*dest = *src;
		n--;
		dest++;
		src++;
	}
	return (dest_cp);
}

int		main(int argc, char **argv)
{
	printf("%s, %s", ft_strncat(*(argv + 1), *(argv + 2), atoi(*(argv + 3))), strncat(*(argv + 1 ), *(argv + 2), atoi(*(argv + 3))));
	return (0);
}
