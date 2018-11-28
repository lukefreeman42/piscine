#define IS_NUM(x) (x >= 48 && x <= 57 ? 1 : 0)

int		ft_atoi(char *str)
{
	int tot;
	int flag;

	flag = 0;
	tot = 0;
	if (*str == '-')
	{
		flag = 1;
		str++;
	}

	while (IS_NUM(*str))
	{
		tot = (10 * tot) + (*str - 48);
		str ++;
	}

	if (flag)
		return (tot * -1);
	else
		return (tot);
}

int main(int argc, char **argv)
{
	int num = ft_atoi(*(argv + 1));
	printf("%d", num);
	return (0);
}

