void	ft_ultimate_div_mod(int *a, int *b)
{
	int *holder = (int *) malloc(sizeof(int) * 2);
	*holder = *a / *b;
	*(holder + 1) = *a % *b;
	*a = *holder;
	*b = *(holder + 1);
}

int		main(int argc, char **argv)
{
	int *a = (int *) malloc(sizeof(int));
	int *b = (int *) malloc(sizeof(int));

	*a = atoi(*(argv + 1));
	*b = atoi(*(argv + 2));
	
	printf("%d,%d ", *a ,*b);
	ft_ultimate_div_mod(a, b);
	printf("%d,%d", *a, *b);
	return (0);
}
