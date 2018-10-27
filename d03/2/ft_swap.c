void	ft_swap(int *a, int *b)
{
	int holdme;
	holdme = *a;
	*a = *b;
	*b = holdme;
}

int		main(int argc, char ** argv)
{
	int *a = (int *) malloc (sizeof(int) * 1);
	int *b = (int *) malloc (sizeof(int) * 1);
	argv++;
	*a = atoi(*argv);
	argv++;
	*b = atoi(*argv);

	printf("%d-%d, ", *a, *b);
	ft_swap(a, b);
	printf("%d-%d", *a, *b);
	return (0);
}
