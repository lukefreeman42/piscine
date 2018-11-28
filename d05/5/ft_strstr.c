char	*ft_strstr(char *haystack, char *needle)
{
	int index;
	int index2;
	char looking_glass1;
	char looking_glass2;

	index = 0;
	index2 = 0;
	while (*(haystack + index))
	{
		looking_glass1 = *(haystack + index);
		looking_glass2 = *(needle + index2);
		while(*(haystack + index + index2) == *(needle + index2))
		{
			if (*(needle + index2 + 1) == '\0')
				return (haystack + index);
			index2++;
		}
		index2 = 0;
		index++;
	}
	return (haystack + index);
}

int		main(int argc, char ** argv)
{
	printf("%s", ft_strstr(*(argv + 1), *(argv + 2)));
	return (0);
}	
