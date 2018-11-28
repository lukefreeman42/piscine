char	*ft_strcpy(char *dst, char *src)
{
	int index;

	index = 0;
	while(*(src + index)) //unsafe, will overwrite unallocated memory
	{
		if(*(src + index))
			*(dst + index) = *(src + index);
		else
			*(dst + index) = '\0';
		index++;
	}
	return (dst);
}

int		main(int argc, char **argv)
{
	char *dst = (char *) malloc(sizeof(char) * (atoi(*(argv + 2) + 1)));
	dst = ft_strcpy(dst, *(argv + 1));
	printf("%s", dst);
	return (0);
}

