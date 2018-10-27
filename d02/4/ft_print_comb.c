#include <unistd.h>

int main(int argc, char ** argv)
{
	int digits[3];
	digits[0] = 0 + 48;
	digits[1] = 1 + 48;
	digits[2] = 2 + 48;

	while (digits[0] <= 7 + 48)
	{
		while (digits[1] <= 8 + 48)
		{
			while (digits[2] <= 9 + 48)
			{
				write(1, &digits[0], 1);
				write(1, &digits[1], 1);
				write(1, &digits[2], 1);
				write(1, " ", 1);
				digits[2] += 1;
			}
			digits[1] += 1;
			digits[2] = digits[1] + 1;
		}
		digits[0] += 1;
		digits[1] = digits[0] + 1;
		digits[2] = digits[0] + 2;
	}
	return (0);
}
