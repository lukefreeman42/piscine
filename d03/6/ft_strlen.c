int		ft_strlen(char *str)
{
	int len = 0;
	while (*str++ != '\0')
		len++;
	return (len);
}

int main (int argc, char **argv)
{
	int len = ft_strlen(*(argv + 1));
	printf("%d", len);
	return (0);
}
