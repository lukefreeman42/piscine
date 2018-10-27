#include <unistd.h>
#include <stdlib.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int		main(int argc, char ** argv)
{
	argv++;
	int *nbr = (int *) malloc(1 * sizeof(int));
	*nbr = atoi(*argv);

	printf("%d, ",*nbr);
	ft_ft(nbr);
	printf("%d",*nbr);
	return (0);
}
