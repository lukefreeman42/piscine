char 	*ft_strlcat(char *dst, char *src, int n)
{
	char *dst_cp = dst;

	while (*dst++)
		n--;
	while (n > 0)
	{
		n--;
		*dst = *src;
		dst++;
		src++;
	}
	return (dst_cp);
}


int		main (int argc, char **argv)
{
	printf("%s, %s", ft_strlcat(*(argv + 1), *(argv + 2), atoi(*(argv + 3))), strlcat(*(argv+1),*(argv + 2), atoi(*(argv + 3))));
	return (0);
}
