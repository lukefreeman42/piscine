#include <unistd.h>

int main (int argc, char ** argv)
{
	int count;
	int alpha;

	alpha = 'z';
	count = 0;

	while (count++ < 26)
	{
		write(1, &alpha, 1);
		alpha--;
	}
	return (0);
}
