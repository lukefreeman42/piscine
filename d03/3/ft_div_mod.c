void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main (int argc, char **argv)
{
	int *div = (int*) malloc(sizeof(int));
	int *mod = (int*) malloc(sizeof(int));

	int a = atoi(*(argv + 1));
	int b = atoi(*(argv + 2));

	ft_div_mod(a, b, div, mod);
	printf("%d, %d", *div, *mod);
	return (0);
}
