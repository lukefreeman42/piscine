char	*ft_strncpy(char *dst, char *src, unsigned int size)
{
	int index;
	
	index = 0;
	while (index < size)
	{
		if (*(src + index))
			*(dst + index) = *(src + index);
		else
			*(dst + index) = '\0';
		index++;
	}
	return (dst);
}

int		main(int argc, char **argv)
{
	char *dst = (char *) malloc(sizeof(char) * atoi(*(argv + 3)));
	dst = ft_strncpy(dst, *(argv + 1), atoi(*(argv + 2)));
	printf("%s", dst);
	return (0);
}
