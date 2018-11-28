char	*ft_strcat(char *dest, char *src)
{
	char *dest_cp;

	dest_cp = dest;
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	dest = '\0';
	return (dest_cp);
}

int		main(int argc, char **argv)
{
	printf("%s, %s", ft_strcat(*(argv + 1),*(argv + 2)), strcat(*(argv + 1), *(argv + 2)));
	return (0);
}
