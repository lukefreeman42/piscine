#include <unistd.h>

int main(int argc, char ** argv)
{
	if (argc > 1)
	{
		int argnum;

		argnum = atoi(*++argv);
		if (argnum < 0)
			write(1, "N", 1);
		else
			write(1, "P", 1);
		return (0);
	}
	else
		return (1);
}
