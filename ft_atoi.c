int ft_atoi(char *str)
{
	int i;
	int r;
	int m;

	i = 0;
	r = 0;
	m = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\f' 
		|| str[i] == '\r' || str[i] == '\v')
		i++;
	if (str[i] == '-')
	{
		m = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10;
		r += (str[i] - 48);
		i++;
	}
	return (r * m);
}
