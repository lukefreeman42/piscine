#include <unistd.h>

int main(int argc, char ** argv)
{
	int count;
	int num;
	
	count = 0;
	num = '0';
	while (count++ < 10)
	{
		write(1, &num, 1);
		num++;
	}
	return (0);
}
